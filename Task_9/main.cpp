#include <iostream>
#include <cmath>

  int main() {
      setlocale(LC_ALL, "RU");
      double z,a,d,x,fx;
      int n;

      std::cout << "Выберите возможные значения функции f(x):2x, x^3, x/3." << '\n';
      std::cout << "Для выбора функции f(x)=2x введите 1." << '\n';
      std::cout << "Для выбора функции f(x)=х^3 введите 2." << '\n';
      std::cout << "Для выбора функции f(x)=x/3 введите 3." << '\n';
      std::cout << "Сделайте выбор:";
      std::cin >> n;

      std::cout<<"Введите z:";
      std::cin>>z;

      if(z>0) {
        x=-3*z; 
        std::cout << "x = 3z, при z>0" << '\n';
      }
      else if(z<=0) {
        x=pow(z,2);
        std::cout << "x = z^2, при z<0" << '\n';
      }
      
      switch (n) {
          case 1: fx=2*x;
          std::cout << "Выбрана функция f(x) = 2x." << '\n';
          break;
          case 2: fx=pow(x,3);
          std::cout << "Выбрана функция f(x) = x^3." << '\n';
          break;
          case 3: fx=x/3;
          std::cout << "Выбрана функция f(x) = x/3." << '\n';
          break;
          default: std::cout << "Неверный ввод, для выбора введите 1,2 или 3." << '\n';
          return 1;
          break;
      }

      std::cout << "Введите числовое значение а:";
      std::cin >> a;
      std::cout << "Введите числовое значение d:";
      std::cin >> d;

      double Y = 2 * fx * fabs(a*sin(x)+d*exp(-(x+3)));
      std::cout << "Y = " << Y << '\n';
      return 0;
  }