#include <stdio.h>

int main ()
{
    short X = 0, Y = 0;
    scanf ("%hd %hd", &X, &Y);

    printf ("%hd\n", X + Y);
    printf ("%hd\n", X - Y);
    printf ("%hd\n", X * Y);
    printf ("%hd\n", X / Y);
    printf ("%hd", X % Y);

    return 0;
}