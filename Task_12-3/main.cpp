#include <iostream>

long long factorial(int n) {
    if (n <= 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double myCos(double x) {
    double result = 0;
    const int terms = 20; 

    for (int n = 0; n < terms; ++n) {
        double term = (n % 2 == 0 ? 1 : -1) * (x * x) / factorial(2 * n);
        result += term;
    }

    return result;
}

double cbrtNewton(double num) {
    double guess = num; 
    const double t = 1e-10;

    while (true) {
        double nextGuess = (2 * guess + num / (guess * guess)) / 3; 
        if (nextGuess - guess < t && nextGuess - guess > -t) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}

int main() {
    double p, q;
    std::cout << "Введите значения p и q: ";
    std::cin >> p >> q;

    double Dis = (q / 2) * (q / 2) + (p / 3) * (p / 3) * (p / 3);

    if (Dis > 0) {
        double u = cbrtNewton(-q / 2 + cbrtNewton(Dis));
        double v = cbrtNewton(-q / 2 - cbrtNewton(Dis));
        double xD = u + v;

        std::cout << " x "<< xD << std::endl;
    } else if (Dis == 0) {
        double x = -cbrtNewton(q / 2);
        std::cout << "x: " << x << std::endl;
    } else {
        double r = cbrtNewton(-(p / 3) * (p / 3) * (p / 3) - Dis);
        double theta = 1 / 3 * 3.141592653589793; // 

        double x1 = 2 * r * myCos(theta);
        double x2 = 2 * r * myCos(theta + (2 * 3.141592653589793) / 3);
        double x3 = 2 * r * myCos(theta + (4 * 3.141592653589793) / 3);

        std::cout << "x=: " << x1 << " " << x2 << " " << x3 << std::endl;
    }

    return 0;
}