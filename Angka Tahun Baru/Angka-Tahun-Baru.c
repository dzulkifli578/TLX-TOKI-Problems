#include <stdio.h>
#include <stdbool.h>

int main ()
{
    short N = 0;
    bool prima = true;
    scanf ("%hd", &N);

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
        prima == false ? printf ("NO") : printf ("YES");
    }
    else printf ("NO");

    return 0;
}