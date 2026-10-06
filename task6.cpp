#include <iostream>

int main(){
    int x,y;
    
    std::cin >> x >> y;

    int dot = (x < 0 && y > 0) || (x > 0 && y < 0);

    std::cout << (dot ? "true" : "false");

    return 0;
}