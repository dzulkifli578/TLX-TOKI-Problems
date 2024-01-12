#include <iostream>
#include <vector>
#include <string>

bool match (const std::string &pattern, const std::string &kata);

int main ()
{
    // membaca pola dari input
    std::string pattern;
    std::cin >> pattern;

    // menentukan jumlah kata
    int N = 0;
    std::cin >> N;

    // membaca kata-kata ke dalam vektor "words"
    std::vector <std::string> words (N);
    for (int i = 0; i < N; i++)
        std::cin >> words [i];

    // iterasi pencocokan kata-kata dan mencetak sesuai dengan pola
    for (const std::string &kata : words)
        if (match (pattern, kata))
            std::cout << kata << "\n";

    return 0;
}

bool match (const std::string &pattern, const std::string &kata)
{
    // menemukan posisi karakter '*' dalam "pattern"
    size_t posisi = pattern.find ('*');
    
    // mengekstrak awalan (prefix) dan akhiran (suffix) dari "pattern" berdasarkan posisi '*'
    std::string prefix = pattern.substr (0, posisi);
    std::string suffix = pattern.substr (posisi + 1);

    // memeriksa apakah panjang "kata" kurang dari panjang gabungan awalan dan akhiran
    // jika iya, kembalikan false
    if (kata.size () < prefix.size () + suffix.size ())
        return 0;

    // membandingkan awalan "kata" dengan awalan "pattern" yang diekstrak
    // jika tidak sama, kembalikan false
    if (kata.compare (0, prefix.size (), prefix) != 0)
        return 0;

    // membandingkan akhiran "kata" dengan akhiran "pattern" yang diekstrak
    // jika tidak sama, kembalikan false
    if (kata.compare (kata.size () - suffix.size (), suffix.size (), suffix) != 0)
        return 0;

    // jika semua pemeriksaan berhasil, kembalikan true.
    return 1;
}