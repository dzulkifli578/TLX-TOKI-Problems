import java.util.Scanner;

public class Wildcard
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        // membaca pola dari input
        String pattern = scan.nextLine ();

        // menentukan jumlah kata
        int N = scan.nextInt ();
        scan.nextLine ();

        // membaca kata-kata ke dalam array "words"
        String [] words = new String [N];
        for (int i = 0; i < N; ++i)
            words [i] = scan.nextLine ();

        scan.close ();

        // iterasi pencocokan kata-kata dan mencetak sesuai dengan pola
        for (String word : words)
            if (match(pattern, word))
                System.out.println(word);
    }
    
    public static boolean match (String pattern, String word)
    {
        // menemukan posisi karakter '*' dalam "pattern"
        int posisi = pattern.indexOf ('*');

        // mengekstrak awalan (prefix) dan akhiran (suffix) dari "pattern" berdasarkan posisi '*'
        String prefix = pattern.substring (0, posisi);
        String suffix = pattern.substring (posisi + 1);

        // memeriksa apakah panjang "kata" kurang dari panjang gabungan awalan dan akhiran
        // jika iya, kembalikan false
        if (word.length () < prefix.length () + suffix.length ())
            return false;

        // membandingkan awalan "kata" dengan awalan "pattern" yang diekstrak
        // jika tidak sama, kembalikan false
        if (!word.startsWith (prefix))
            return false;

        // membandingkan akhiran "kata" dengan akhiran "pattern" yang diekstrak
        // jika tidak sama, kembalikan false
        if (!word.endsWith (suffix))
            return false;

        // jika semua pemeriksaan berhasil, kembalikan true.
        return true;
    }
}