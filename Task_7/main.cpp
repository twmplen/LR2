#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c;
    int N;
    double Y;
    
    cout << "Введите значения (a,b,c): ";
    cin >> a >> b >> c;
    cout << "Введите значение N: ";
    cin >> N;
    
    switch (N)
    {
    case 2:
        Y = b * c - pow(a,2);
        break;
    case 56:
        Y = b * c;
        break;
    case 7:
        Y = pow(a,2) +c;
        break;
    case 3:
        Y = a - (b * c);
        break;
    
    default:
        Y = pow(a + b,3) ;
        break;
    }

    cout << "Значение Y = " << Y;

    return 0;
}
