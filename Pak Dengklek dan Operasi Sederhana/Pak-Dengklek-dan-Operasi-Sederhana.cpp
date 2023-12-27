#include <iostream>

int main ()
{
    short X = 0, Y = 0;
    std::cin >> X >> Y;

    std::cout << X + Y << "\n";
    std::cout << X - Y << "\n";
    std::cout << X * Y << "\n";
    std::cout << X / Y << "\n";
    std::cout << X % Y;

    return 0;
}