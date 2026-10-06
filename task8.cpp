#include <iostream>
#include <algorithm>
int main(){
    int a,b,c;
    std::cin >> a >> b >> c;

    int smallest = std::min(a, std::min(b, c));

    int sum = a + b + c - smallest;
    
    std::cout << sum;
    return 0;
}