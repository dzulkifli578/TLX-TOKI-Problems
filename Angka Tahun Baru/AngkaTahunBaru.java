import java.util.Scanner;

public class AngkaTahunBaru
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        short N = scan.nextShort ();
        boolean prima = true;
        
        scan.close ();

        if (N < 7 && N > 1)
        {
            for (int i = 2; i * i <= N; i++)
            {
                if (N % i == 0)
                {
                    prima = false;
                    break;
                }
            }
            System.out.print (prima == false ? "NO" : "YES");
        }
        else System.out.print ("NO");
    }
}
