#include <iostream>

using namespace std;

int main() {
    double X, Y;
    

    cout << "Введите два вещественных числа Х и Y: ";
    cin >> X >> Y;

    bool condition = X > Y;
    double max = condition ? X: Y;


    cout << "Максимальное значение: " << max << endl;

    return 0;
}