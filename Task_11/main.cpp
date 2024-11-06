#include <iostream>

using namespace std;

int main() {
    int h1, min1;
    int h2, min2;

    cout << "Введите начальное время (часы и минуты): ";
    cin >> h1 >> min1;
    cout << "Введите конечное время (часы и минуты): ";
    cin >> h2 >> min2;
    
    int startTime = h1 * 60 + min1;
    int endTime = h2 * 60 + min2;
    
    int duration;
    if (endTime >= startTime) {
        duration = endTime - startTime;
    } else {
        duration = (24 * 60 - startTime) + endTime;
    }
    
    int hours = duration / 60;
    int minutes = duration % 60;
    
    cout << "Студент решал задачи " << hours << " часов и " << minutes << " минут.\n";

    return 0;
}