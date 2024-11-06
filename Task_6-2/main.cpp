#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,k,p,K,D,C;
    std::cout << "Введите x:";
    std::cin >> x;
    std::cout << "Введите K:";
    std::cin >> K;
    std::cout << "Введите p:";
    std::cin >> p;
    std::cout << "Введите D:";
    std::cin >> D;
    std::cout << "Введите C:";
    std::cin >> C;
    double A = x + sin(p);
    double B = exp(k);
    double S = K * K/(2 * A * B);
    double Y = 1 + (S) - B + D * C;
    std::cout << "Y = " << Y;
    return 0;
}