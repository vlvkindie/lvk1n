#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;            

    bool triangleExists = (a + b > c) && (a + c > b) && (b + c > a);

    std::cout << (triangleExists ? "true" : "false");

    return 0;
}