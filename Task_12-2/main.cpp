#include <iostream>

double myAbs(double x) {
    return x>=0 ? x : -x;
}

double mySqrt(double x) {
    const double eps = 1e-15;
    double result = x;
    double xn = 0;
    while (myAbs(result - xn) > eps) {
        xn = result;
        result = (xn + x / xn) / 2;
    } 
    return result;
}


int main(){
    double a = 0, b = 0, c = 0;
    std::cout << " Input a , b , c in ax^4 + bx^3 + cx^2 + bx + a = 0;" << std::endl;
    std::cin >> a >> b >> c;
    double z = c - 2*a ;

    double dis = b*b - 4 * a * z;

    double t1 = (-b + mySqrt((b*b - 4*a*c + 8*a*a))) / (2*a);
    double t2 = (-b - mySqrt((b*b - 4*a*c + 8*a*a))) / (2*a);

    //x^2 - t1 + 1 = 0
    double a1 = 1,c1 = 1;
    double dis1 = t1*t1 - 4*a1*c1;

    if(dis1 < 0){
        std::cout << " ERROR 1 ";
        return 0;
    }else{
        if(dis1 == 0){
            double x1 = -t1 / 2;
            if(x1 == 0){
                std::cout << " ERROR 2 ";
                return 0;
            }else{
                std::cout << " x - " << x1;
            }
        }else{
            double x2 = (-t1 - mySqrt(dis1)) / ( 2*a );
            double x3 = (-t1 + mySqrt(dis1)) / ( 2*a ); 
            std::cout << " x2 = " << x2 << " x3 = " << x3;
        }
    }

    double dis2 = t2*t2 - 4*a1*c1;

    if(dis2 < 0){
        std::cout << " ERROR 2 ";
        return 0;
    }else{
        if(dis2 == 0){
            double x4 = -t2 / 2;
            if(x4 == 0){
                std::cout << " ERROR 2 ";
                return 0;
            }else{
                std::cout << " x - " << x4;
            }
        }else{
            double x5 = (-t2 - mySqrt(dis2)) / ( 2*a );
            double x6 = (-t2 + mySqrt(dis2)) / ( 2*a ); 
            std::cout << " x5 = " << x5 << " x6 = " << x6;
        }
    }
    return 0;
}