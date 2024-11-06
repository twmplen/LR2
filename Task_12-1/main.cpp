#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b, c;
    
    cout << "Введите коэффициенты а, b, с для уравнения ах^4 + bx^2 + c = 0: ";
    cin >> a >> b >> c;
    
    double D = b * b - 4 * a * c;
    if (D < 0) {
        cout << "Нет действительных корней.\n" ;
    } else {
        double y1 = (-b + sqrt(D)) / (2 * a);
        double y2 = (-b - sqrt(D)) / (2 * a);
        
        if (y1 >= 0) {
            cout << "x1 = " << sqrt(y1) << ", x2 = " << -sqrt(y1) << endl;
        }
        if (y2 >= 0) {
            cout << "x3 = " << sqrt(y2) << ", x4 = " << -sqrt(y2) << endl;
        }
    }

    return 0;
}