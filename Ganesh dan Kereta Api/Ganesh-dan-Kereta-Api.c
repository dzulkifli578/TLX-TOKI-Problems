#include <stdio.h>

int main ()
{
    short N = 0;
    scanf ("%hd", &N);

    short A [N];
    for (short i = 0; i < N; i++)
        scanf ("%hd", &A [i]);

    for (short i = N - 1; i >= 0; i--)
    {
        printf ("%hd", A [i]);
        if (i > 0) printf (",");
    }

    return 0;
}