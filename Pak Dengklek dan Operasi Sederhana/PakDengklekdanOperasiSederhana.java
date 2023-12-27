import java.util.Scanner;

public class PakDengklekdanOperasiSederhana
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        short X = scan.nextShort ();
        short Y = scan.nextShort ();

        System.out.println (X + Y);
        System.out.println (X - Y);
        System.out.println (X * Y);
        System.out.println (X / Y);
        System.out.print (X % Y);

        scan.close ();
    }
}