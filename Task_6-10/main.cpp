#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "Rus");
    double x,k,z,D,C;
    std::cout << "Введите x:";
    std::cin >> x;
    std::cout << "Введите k:";
    std::cin >> k;
    std::cout << "Введите z:";
    std::cin >> z;
    double A=log(x)-k;
    double B=sqrt(z);
    std::cout << "Введите D:";
    std::cin >> D;
    std::cout << "Введите С:";
    std::cin >> C;
    double Y =(C*C/0.75*A)+D*D+B;
    std::cout << "Y=" << Y;
    return 0;
}