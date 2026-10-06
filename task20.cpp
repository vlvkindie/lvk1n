#include <iostream> 
#include <cmath>

int main() { 
    double R1, R2; 

    std::cout << "Enter radii R1,R2(R1>R2): "; 
    std::cin >> R1 >> R2;

    const double PI = 3.141592653589793;
    
    double S1 = PI * R1 * R1;
    double S2 = PI * R2 * R2;

    double S3 = S1 - S2; 

    std::cout << "Area S1: " << S1 << std::endl;

    std::cout << "Area S2: " << S2 << std::endl;

    std::cout << "Area S3: " << S3 << std::endl;

    return 0;
}