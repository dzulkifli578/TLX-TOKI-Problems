#include <iostream>

int main ()
{
    short N = 0;
    bool prima = true;
    std::cin >> N;

    if (N < 7 && N > 1)
    {
        for (int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                prima = false;
                break;
            }
        }
        prima == false ? std::cout << "NO" : std::cout << "YES";
    }
    else std::cout << "NO";

    return 0;
}