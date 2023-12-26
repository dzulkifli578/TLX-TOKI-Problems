#include <iostream>

int main ()
{
    short P = 0, Q = 0;
    std::cin >> P >> Q;

    int hasil = (P * P) + (Q * Q) + 1;
    hasil % 4 == 0 ? std::cout << hasil : std::cout << -1;

    return 0;
}