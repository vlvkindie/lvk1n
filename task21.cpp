#include <iostream>
#include <cmath>

int main() {
    double  x1,y1,x2,y2,x3,y3;
    
    std::cout << "enter coordinates(x1 y1) :";
    std::cin >> x1 >> y1;

    std::cout << "enter coordinates(x2 y2) :";
    std::cin >> x2 >> y2;

    std::cout << "enter coordinates(x3 y3) :";
    std::cin >> x3 >> y3;

    double a = std::sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double b = std::sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    double c = std::sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));

    double P = a + b + c;
    double p = P / 2.0;

    double S = std::sqrt(p*(p-a)*(p-b)*(p-c));

    std::cout << "Perimeter = " << P << std::endl;
    std::cout << "Area = " << S << std::endl;

    return 0;
}