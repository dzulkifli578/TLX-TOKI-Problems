#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
int match (const char *pattern, const char *word);

int main ()
{
    // membaca pola dari input
    char pattern [MAX_LENGTH];
    scanf ("%s", pattern);

    // menentukan jumlah kata
    int N = 0;
    scanf ("%d", &N);

    // membaca kata-kata ke dalam vektor "words"
    char words [N][MAX_LENGTH];
    for (int i = 0; i < N; i++)
        scanf ("%s", words [i]);

    // iterasi pencocokan kata-kata dan mencetak sesuai dengan pola
    for (int i = 0; i < N; i++)
        if (match (pattern, words [i]))
            printf ("%s\n", words [i]);

    return 0;
}

int match (const char *pattern, const char *word)
{
    // menemukan posisi karakter '*' dalam "pattern"
    char *pos = posisi (pattern, '*');

    // mengekstrak awalan (prefix) dan akhiran (suffix) dari "pattern" berdasarkan posisi '*'
    int prefix_length = pos - pattern;
    int suffix_length = strlen (pattern) - prefix_length - 1;

    // memeriksa apakah panjang "kata" kurang dari panjang gabungan awalan dan akhiran
    // jika iya, kembalikan false
    if (strlen (word) < prefix_length + suffix_length) return 0;

    // membandingkan awalan "kata" dengan awalan "pattern" yang diekstrak
    // jika tidak sama, kembalikan false
    if (strncmp (word, pattern, prefix_length) != 0) return 0;

    // membandingkan akhiran "kata" dengan akhiran "pattern" yang diekstrak
    // jika tidak sama, kembalikan false
    if (strcmp (word + strlen (word) - suffix_length, pattern + prefix_length + 1) != 0) return 0;

    // jika semua pemeriksaan berhasil, kembalikan true.
    return 1;
}