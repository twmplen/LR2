#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,y,C,K;
    std::cout << "Введите х:";
    std::cin >> x;
    std::cout << "Введите y:";
    std::cin >> y;
    double A = x + y;
    std::cout << "Введите С:";
    std::cin >> C;
    double D = fabs (C-A);
    double S= 10.1 + (A / C) + (D / K * K);
    std::cout << "S=" << S;
    return 0;
}