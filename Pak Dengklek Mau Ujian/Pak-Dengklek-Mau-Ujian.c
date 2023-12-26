#include <stdio.h>

int main ()
{
    short N = 0;
    scanf ("%hd", &N);

    N >= 0 && N <= 100 ? printf ("YA") : printf ("TIDAK");
}