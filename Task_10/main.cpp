#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, r; 
    double x2, y2, R;
    
    cout << "Введите координаты центра круга М1 (х1, у1) и радиус г: ";
    cin >> x1 >> y1 >> r;
    cout << "Введите координаты центра круга М2 (x2, у2) и радиус R: ";
    cin >> x2 >> y2 >> R;
    
    double d = sqrt(pow((x2 - x1),2) + pow ((y2 - y1),2));
    
    if (d + r <= R) {
        cout << "Дa\n";
    } else if (d + R <= r) {
        cout << "Да, но справедливо обратное для двух фигур\n";
    } else if (d == R + r) { 
        cout << "Фигуры пересекаются \n";
    } else {
        cout << "Ни одно условие не выполнено\n";
    }

    return 0;
}