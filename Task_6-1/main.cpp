#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double D,x;
    std::cout << "Введите D:";
    std::cin >> D;
    std::cout << "Введите x:";
    std::cin >> x;
    double b = x + D;
    double A = (D * x)/ b;
    double S = (A * A + b * cos(x)) / (D * D * D + (A + D - b));
    std::cout  << "S=" << S ;
    return 0;
}