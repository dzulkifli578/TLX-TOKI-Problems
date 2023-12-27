import java.util.Scanner;

public class GaneshdanKeretaApi
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        short N = scan.nextShort ();

        short [] A = new short [N];
        for (short i = 0; i < N; i++)
            A [i] = scan.nextShort ();

        scan.close ();

        for (int i = N - 1; i >= 0; i--)
        {
            System.out.print (A [i]);
            if (i > 0) System.out.print (",");
        }
    }    
}
