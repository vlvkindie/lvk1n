#include <iostream>

int main(){
    int n;
    double a,b;
    std::cin >> n >> a >> b;
    switch (n){
        case 1:
            std::cout << a + b;
            break;
        case 2:
            std::cout << a - b;
            break;
        case 3:
            std::cout << a * b;
            break;
        case 4:
            if (b!=0){
                std::cout << a / b;
            } else {
                std::cout << "error: division by zero";
            }
            break;
    default:
        std::cout << "error";
    }
    return 0;
}