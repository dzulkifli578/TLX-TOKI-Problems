#include <stdio.h>

int main ()
{
    short N = 0, menit = 0, jam = 0;
    scanf ("%hd", &N);

    jam = N / 3600;
    N %= 3600;
    menit = N / 60;
    N %= 60;

    printf ("%d\n%d\n%d", jam, menit, N);

    return 0;
}