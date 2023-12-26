import java.util.Scanner;

public class BungaGabungan
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        short P = scan.nextShort ();
        short Q = scan.nextShort ();

        scan.close ();

        int hasil = (P * P) + (Q * Q) + 1;
        System.out.print (hasil % 4 == 0 ? hasil : -1);
    }
}
