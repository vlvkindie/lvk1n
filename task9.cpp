#include <iostream>
#include <cmath>
int main(){
    int a,b,c;
    std::cin >> a >> b >> c;

    int distb = abs(a-b);
    int distc = abs(a-c);

    if (distb < distc) {
        std::cout << "B" << distb;
    } else {
        std::cout << "C" << distc;
    }
    
    return 0;
}