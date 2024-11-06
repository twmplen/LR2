#include <iostream>

using namespace std;

int main() {
    double b1;
    int n = 16;

    cout << "Введите первый член геометрической прогрессии (b1): ";
    cin >> b1;

    double q = 1.0 / (n + 1);

     if (q >= 1) {
        cout << "Прогрессия не убывает, сумма не определена. \n";
     } else {
        double sum = b1 / (1-q);
        cout << "Сумма членов геометрической прогрессии: " << sum << "\n";
     }

     return 0;
}