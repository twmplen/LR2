#include <iostream>

using namespace std;

int main() {
    int a, b;
    int sum, product;
   
    cout << "Введите первое целое число: ";
    cin >> a;
    cout << "Введите второе целое число: ";
    cin >> b;
    
    cout << "До первого шага:\n";
    cout << "a = " << a << ", b = " << b << endl;
    
    sum = a + b;
    cout << "После шага 1 (вычисление суммы):\n";
    cout << "sum = " << sum << endl;
    
    product = a * b;
    cout << "После шага 2 (вычисление произведения):\n";
    cout << "product = " << product << endl;
    cout << "Итог:\n";
    cout << "Сумма = " << sum << ", Произведение = " << product << endl;

    return 0;   
}