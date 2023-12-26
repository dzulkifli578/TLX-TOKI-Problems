import java.util.Scanner;

public class BajuKonserBlankon
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);   
        short B = scan.nextShort ();
        short P = scan.nextShort ();
        short L = scan.nextShort ();

        scan.close ();

        if (B <= 10 && P <= 40 && L <= 90) System.out.print ("S");
        else if (B <= 14 && P <= 60 && L <= 120) System.out.print ("M");
        else if (B <= 18 && P <= 80 && L <= 180) System.out.print ("L");
        else if (B <= 25 && P <= 100 && L <= 220) System.out.print ("X");
        else System.out.print ("X");
    }
}