#include <iostream>;
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
    double x,z,p,C,D,K;
    std::cout << "Введите х:";
    std::cin >> x;
    std::cout << "Введите z:";
    std::cin >> z;
    std::cout << "Введите p:";
    std::cin >> p;
    double A = sin(x)-z;
    double B= fabs(p-x);
    double Y = pow(A+B,2)-(K / C * D);
    std::cout << "Y=" << Y;
    return 0;
}