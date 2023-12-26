import java.util.Scanner;

public class PakDengklekMauUjian
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        
        short N = scan.nextShort ();
        scan.close ();

        System.out.print (N >= 0 && N <= 100 ? "YA" :"TIDAK");
    }
}