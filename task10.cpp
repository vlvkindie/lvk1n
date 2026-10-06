#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    if (n < 0){
        if (n % 2 == 0){
            std::cout << "negative even num";
        } else {
            std::cout << "negative odd num";
        }   
    } else if (n==0){
        std::cout << "zero";
    } else {
        if (n % 2 == 0){
            std::cout << "positive even num";
        } else {
            std::cout << "positive odd num";
        }
    }
    
    return 0;
}