#include <iostream>

int main(){
    int n;
    std::cin >> n;

    bool threedigit = (n>=100 && n<=999);

    std::cout << (threedigit ? "true" : "false");

    return 0;
}