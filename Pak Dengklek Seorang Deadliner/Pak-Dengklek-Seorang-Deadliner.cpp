#include <iostream>

int main ()
{
    short N = 0, menit = 0, jam = 0;
    std::cin >> N;

    jam = N / 3600;
    N %= 3600;
    menit = N / 60;
    N %= 60;

    std::cout <<  jam << "\n" << menit << "\n" << N;

    return 0;
}