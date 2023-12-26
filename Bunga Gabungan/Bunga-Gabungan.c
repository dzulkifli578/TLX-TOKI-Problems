#include <stdio.h>

int main ()
{
    short P = 0, Q = 0;
    scanf ("%hd %hd", &P, &Q);

    int hasil = (P * P) + (Q * Q) + 1;
    hasil % 4 == 0 ? printf ("%d", hasil) : printf ("-1");

    return 0;
}