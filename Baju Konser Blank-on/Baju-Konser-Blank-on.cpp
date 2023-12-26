#include <iostream>

int main ()
{
    short B = 0, P = 0 , L = 0;
    std::cin >> B >> P >> L;

    if (B <= 10 && P <= 40 && L <= 90) std::cout << "S";
    else if (B <= 14 && P <= 60 && L <= 120) std::cout << "M";
    else if (B <= 18 && P <= 80 && L <= 180) std::cout << "L";
    else if (B <= 25 && P <= 100 && L <= 220) std::cout << "X";
    else std::cout << "X";

    return 0;
}