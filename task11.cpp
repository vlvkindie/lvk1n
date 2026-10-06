#include <iostream>

int main(){
    int k;
    std::cin >> k;

    switch (k) {
        case 1: std::cout << "poor"; break;
        case 2: std::cout << "unsatisfactory"; break;
        case 3: std::cout << "satisfactory"; break;
        case 4: std::cout << "good"; break;
        case 5: std::cout << "excellent"; break;
        default: std::cout << "error"; 
    }
    return 0;
}