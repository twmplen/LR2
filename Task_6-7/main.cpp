#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,p,h,C,D,K;
    std::cout << "Введите x:";
    std::cin >> x;
    std::cout << "Введите p:";
    std::cin >> p;
    std::cout << "Введите h:";
    std::cin >> h;
    double A = x - p;
    double B= log(h);
    std::cout << "Введите C:";
    std::cin >> C;
    std::cout << "Введите D:";
    std::cin >> D;
    std::cout << "Введите K:";
    std::cin >> K;
    double Y= 0.78 * B + (A * A * A / K * C * D);
    std::cout << "Y=" << Y;
    return 0;
}