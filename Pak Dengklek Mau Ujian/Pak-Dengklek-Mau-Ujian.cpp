#include <iostream>

int main ()
{
    short N = 0;
    std::cin >> N;

    N >= 0 && N <= 100 ? std::cout << "YA" : std::cout << "TIDAK";

    return 0;
}