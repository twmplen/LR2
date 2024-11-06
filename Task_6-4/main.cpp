#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "RU");
  double x,y,z,K,D,C;
    std::cout << "Введите х:";
    std::cin >> x;
    std::cout << "Введите y:";
    std::cin >> y;
    std::cout << "Введите z:";
    std::cin >> z;
    double A = x - y;
    double B = sqrt(z);
    std::cout << "Введите K:";
    std::cin >> K;
    std::cout << "Введите C:";
    std::cin >> C;
    std::cout << "Введите D:";
    std::cin >> D;
    double m = A * A / K - C * D;
    double T = cos(x) + (m) - B;
    std::cout << "T=" << T << std::endl;
    return 0;
}