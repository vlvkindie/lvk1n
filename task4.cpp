#include <iostream>

int main(){
    int a , b , c;
    std::cin >> a >> b >> c;

    int equalpair = (a == b) || (b == c) || (a == c);

    std::cout << (equalpair ? "true" : "false");

    return 0;
}