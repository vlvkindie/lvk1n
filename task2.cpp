#include <iostream>

int main(){
    int a,b;
    
    std::cin >> a >> b;
       
    bool aeven = (a % 2 == 0);
    bool beven = (b % 2 == 0);

    bool same = (aeven == beven);

    std::cout << (same ? "true" : "false");

    return 0;
} 