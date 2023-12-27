import java.util.Scanner;

public class PakDengklekSeorangDeadliner
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int N = scan.nextShort ();
        
        int jam = N / 3600;
        N %= 3600;
        int menit = N / 60;
        N %= 60;

        System.out.println (jam);
        System.out.println (menit);
        System.out.print (N);

        scan.close ();
    }    
}
