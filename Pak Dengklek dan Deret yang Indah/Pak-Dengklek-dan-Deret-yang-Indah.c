#include <stdio.h>

int main ()
{
    short S = 0, N = 0, D = 0, mulai = 0;
    scanf ("%hd %hd %hd", &S, &N, &D);

    mulai = S;

    for (short i = 0; i < N; i++)
    {
        printf ("%hd\n", mulai);
        mulai += D;
    }

    return 0;
}