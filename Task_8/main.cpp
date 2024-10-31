#include <iostream>
const long double PI = 3.14159265358979383246;

double Abs(double x) {
    return (x >= 0) ? x : -x;
}

double fac(int n) {
    if (n < 0) {
        return 1;
    }
    double res = 1.0;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

double pow(double x, int n) {
    double res = 1.0;
    for (int i = 0; i < n; ++i) {
        res *= x;
    }
    return res;
}
double normalizeAngle(double x) {
    while (x > 2 * PI) x -= 2 * PI;
    while (x < -2 * PI) x += 2 * PI;
    return x;
}

double sqrt(double num) {
if (num < 0) {
return -1;
}
double l = 0, r = num, mid;
double epsilon = 1e-6;
if (num < 1) r = 1;
while (r- l > epsilon) {
mid = (l + r) / 2;
if (mid * mid < num) {
l = mid; } 
else {
r = mid; }
}
return (l + r) / 2;
}

double cos(double x) {
    x = normalizeAngle(x);
    double result = 1.0;
    double term = 1.0;
    int n = 0;
    do {
        n++;
        term *= -x * x / (2 * n * (2 * n - 1));
        result += term;
    } while (Abs(term) > 1e-10);

    return result;
}
long double acos(long double x) {
    long double left = 0.0;
    long double right = PI;
    long double mid;

    while (right - left > 1e-10) {
        mid = (left + right) / 2.0;
        if (cos(mid) < x) {
            right = mid;
        }
        else {
            left = mid;
        }
    }

    return (left + right) / 2.0;
}

double herona_area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double coord_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

double sin(double x) {
    double term = x;
    double sum = term;
    int n = 1;
    while (true) {
        term *= -x * x / (2 * n * (2 * n + 1));
        sum += term;
        if (abs(term) < 0.000001) break;
        n++;
    }
    return sum;
}

double sin_area(double a, double b, double angle) {
    return 0.5 * a * b * sin(angle);
}

int main() {
    double x1, y1, x2, y2, x3, y3, AB, BC, AC, S1, ha, hb, hc, ma, mb, mc, alp, bet, gam;
    double a, b, c, p, P, R, r, cosa, cosb, cosc, gra, grb, grc, sina, sinb, sinc;

    std::cout << "Введите координаты вершины A:\n";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты вершины B:\n";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты вершины C:\n";
    std::cin >> x3 >> y3;

    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    a = AB; b = BC; c = AC;

    std::cout << "Сторона AB (a): " << a << "\nСторона BC (b): " << b << "\nСторона AC (c): " << c << '\n';

    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Треугольник с данными сторонами не существует.";
        return 1;
    }

    if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c) {
        std::cout << "Треугольник является прямоугольным.\n";
    } else if (c * c < a * a + b * b && a * a < b * b + c * c && b * b < a * a + c * c) {
        std::cout << "Треугольник является остроугольным.\n";
    } else {
        std::cout << "Треугольник является тупоугольным.\n";
    }

    p = (a + b + c) / 2;
    P = a + b + c;
    S1 = herona_area(a, b, c);
    std::cout << "Полупериметр треугольника: " << p << '\n';
    std::cout << "Периметр треугольника: " << P << '\n';

    ha = (2 * S1) / a;
    hb = (2 * S1) / b;
    hc = (2 * S1) / c;
    std::cout << "Длина высоты, проведенная к стороне a: " << ha << '\n';
    std::cout << "Длина высоты, проведенная к стороне b: " << hb << '\n';
    std::cout << "Длина высоты, проведенная к стороне c: " << hc << '\n'; 

    ma = 0.5 * sqrt(pow(2 * b, 2) + pow(2 * c, 2) - pow(a, 2));
    mb = 0.5 * sqrt(pow(2 * a, 2) + pow(2 * c, 2) - pow(b, 2));
    mc = 0.5 * sqrt(pow(2 * a, 2) + pow(2 * b, 2) - pow(c, 2));
    std::cout << "Медиана, проведенная к стороне a: " << ma << '\n';
    std::cout << "Медиана, проведенная к стороне b: " << mb << '\n';
    std::cout << "Медиана, проведенная к стороне c: " << mc << '\n';

    cosa = (b * b + c * c - a * a) / (2 * b * c);
    cosb = (a * a + c * c - b * b) / (2 * a * c);
    cosc = (a * a + b * b - c * c) / (2 * a * b);
    
    std::cout << "Косинус угла a: " << cosa << '\n';
    std::cout << "Косинус угла b: " << cosb << '\n';
    std::cout << "Косинус угла c: " << cosc << '\n';

    alp = acos(cosa);
    bet = acos(cosb);
    gam = acos(cosc);
    std::cout << "Угол a: " << alp << " радиан.\n";
    std::cout << "Угол b: " << bet << " радиан.\n";
    std::cout << "Угол c: " << gam << " радиан.\n";

    gra = alp * (180 / PI);
    grb = bet * (180 / PI);
    grc = gam * (180 / PI);
    std::cout << "Угол a: " << gra << " градусов.\n";
    std::cout << "Угол b: " << grb << " градусов.\n";
    std::cout << "Угол c: " << grc << " градусов.\n";

    sina = sqrt(1 - pow(cosa, 2));
    sinb = sqrt(1 - pow(cosb, 2));
    sinc = sqrt(1 - pow(cosc, 2));

    double da = (2 * b * c / (b + c) * cosa / 2);
    double db = (2 * a * c / (a + c) * cosb / 2);
    double dc = (2 * a * b / (a + b) * cosc / 2);
    std::cout << "Биссектрисса, проведенная к стороне a: " << da << '\n';
    std::cout << "Биссектрисса, проведенная к стороне b: " << db << '\n';
    std::cout << "Биссектрисса, проведенная к стороне c: " << dc << '\n';

    S1 = herona_area(a, b, c);
    double S2 = 0.5 * a * ha;
    double S3 = 0.5 * a * b * sinc;
    std::cout << "Площадь треугольника (по формуле Герона): " << S1 << '\n';
    std::cout << "Площадь треугольника (через высоту): " << S2 << '\n';
    std::cout << "Площадь треугольника (через 2 стороны и синус угла между ними): " << S3 << '\n';

    R = (a * b * c) / (4 * S1);
    r = S1 / p;
    std::cout << "Радиус описанной окружности: " << R << '\n';
    std::cout << "Радиус вписанной окружности: " << r << '\n';

    double CR = 2 * PI * R;
    double Cr = 2 * PI * r;
    std::cout << "Длина описанной окружности: " << CR << '\n';
    std::cout << "Длина вписанной окружности: " << Cr << '\n';

    double SR = PI * R * R;
    double Sr = PI * r * r;
    std::cout << "Площадь описанной окружности: " << SR << '\n';
    std::cout << "Площадь вписанной окружности: " << Sr << '\n';
    
    return 0;
}    