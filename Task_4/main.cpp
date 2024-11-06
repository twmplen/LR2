#include <iostream>

using namespace std;

int main() {

    int X, Y;
    cout << "Введите целые числа X и Y: ";
    cin >> X >> Y;

    if (X < Y) {
        X = 0;
    } else if (X > Y) {
        Y = 0;
    } else {
        X = 0;
        Y = 0;
    }

    double A, B, C;
    cout << "Введите вещественные числа А, В и С: ";
    cin >> A >> B >> C;

    double K;
    cout << "Введите значение К: ";
    cin >> K;

    double maxVal = A;
    if (B > maxVal) {
        maxVal = B;
    }
    if (C > maxVal) {
        maxVal = C;
    }

    if (maxVal == A) {
        A -= K;
    } else if (maxVal == B) {
        B -= K;
    } else {
        C -= K;
    }

    cout << "Результаты:\n";
    cout << "X: " << X << "\n";
    cout << "Y: " << Y << "\n";
    cout << "A: " << A << "\n";
    cout << "B: " << B << "\n";
    cout << "C: " << C << "\n";

    return 0;
 }