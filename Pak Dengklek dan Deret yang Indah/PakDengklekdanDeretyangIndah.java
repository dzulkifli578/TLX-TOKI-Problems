import java.util.Scanner;

public class PakDengklekdanDeretyangIndah
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        short S = scan.nextShort ();
        short N = scan.nextShort ();
        short D = scan.nextShort ();
        scan.close ();

        short mulai = S;
        for (short i = 0; i < N; i++)
        {
            System.out.println (mulai);
            mulai += D;
        }
    }    
}