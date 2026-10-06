#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int d1 = n/100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;

    int diff = (d1 != d2) && (d2 != d3) && (d1 != d3);

    std::cout << (diff ? "true" : "false");
    
    return 0;
}