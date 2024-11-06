#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,d,C,K;
    std::cout << "Введите х:";
    std::cin >> x;
    std::cout << "Введите d:";
    std::cin >> d;
    std::cout << "Введите С:";
    std::cin >> C;
    std::cout << "Введите К:";
    std::cin >> K;
    double A= log (x);
    double B= x+exp(d);
    double Y= (A + B) - (C * C / K);
    std::cout << "Y=" << Y;
    return 0;
}