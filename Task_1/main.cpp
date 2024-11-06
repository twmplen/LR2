#include <iostream>

using namespace std;

int main() {
    double x;
    cout << "Введите x: ";
    cin >> x;

    double x2 = x * x;
    double x3 = x2 * x;

    double result1 = 23 * x3 + 69 * x2 + 32 * x + 8;

    double result2 = -23 * x3 + 69 * x2 - 32 * x + 8;

    cout << "Результат 23x^3 + 69x^2 + 32x + 8: " << result1 << "\n";
    cout << "Результат -23x^3 + 69x^2 - 32x + 8: " << result2 << "\n";

    return 0;
}