#include <iostream>

int main ()
{
    short N = 0;
    std::cin >> N;

    short A [N];
    for (short i = 0; i < N; i++)
        std::cin >> A [i];

    for (short i = N - 1; i >= 0; i--)
    {
        std::cout << A [i];
        if (i > 0) std::cout << ",";
    }

    return 0;
}