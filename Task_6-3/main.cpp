#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,p,n;
    std::cout << "Введите х:";
    std::cin >> x;
    std::cout << "Введите p:";
    std::cin >> p;
    std::cout << "Введите n:";
    std::cin >> n;
    double B = cos(x);
    double C = p - n;
    double K,D;
    std::cout << "Введите K:";
    std::cin >> K;
    std::cout << "Введите D:";
    std::cin >> D;
    double z = B * B / K * D;
    double Q = (z) + B * C * C * C;
    std::cout << "Q = " << Q;
    return 0;
}