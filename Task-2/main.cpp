#include <iostream>

using namespace std;

int main() {
    double x, y, z;
    
    cout << "Введите длины сторон треугольника (x, y, z): ";
    cin >> x >> y >> z;

    if ( x + y > z && x + z > y && y + z > x) {
        cout << "Треугольник с такими сторонами существует.\n";
    } else {
        cout << "Треугольник с такими сторонами не существует.\n";
    }

    return 0;
}