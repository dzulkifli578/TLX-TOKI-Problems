#include <iostream>

int main ()
{
    short S = 0, N = 0, D = 0, mulai = 0;
    std::cin >> S >> N >> D;

    mulai = S;
    for (short i = 0; i < N; i++)
    {
        std::cout << mulai << "\n";
        mulai += D;
    }
    
    return 0;
}