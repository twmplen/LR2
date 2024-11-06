#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double n,m,x,K;
    std::cout << "Введите n:";
    std::cin >> n;
    std::cout << "Введите m:";
    std::cin >> m;
    std::cout << "Введите х:";
    std::cin >> x;
    double A = fabs(n+m);
    double D = tan(x);
    std::cout << "Введите К:";
    std::cin >> K;
    double Y= 1.29 + (K / A) * D * D;
    std::cout << "Y=" << Y;
    return 0;
}