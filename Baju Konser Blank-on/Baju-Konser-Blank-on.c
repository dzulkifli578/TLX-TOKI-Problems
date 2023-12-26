#include <stdio.h>

int main ()
{
    short B = 0, P = 0 , L = 0;
    scanf ("%hd %hd %hd", &B, &P, &L);

    if (B <= 10 && P <= 40 && L <= 90) printf ("S");
    else if (B <= 14 && P <= 60 && L <= 120) printf ("M");
    else if (B <= 18 && P <= 80 && L <= 180) printf ("L");
    else if (B <= 25 && P <= 100 && L <= 220) printf ("X");
    else printf ("X");

    return 0;
}