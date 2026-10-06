#include <iostream>

int main() {
    double V1, V2, S, T;
    
    std::cout << "Enter the speed of the first car (V1 in km/h): ";
    std::cin >> V1;
    
    std::cout << "Enter the speed of the second car (V2 in km/h): ";
    std::cin >> V2;
    
    std::cout << "Enter the initial distance between them (S in km): ";
    std::cin >> S;
    
    std::cout << "Enter the travel time (T in hours): ";
    std::cin >> T;
    
    double total_distance = S + (V1 + V2) * T;
    
    std::cout << "The distance between the cars after"  << T << "hours will be: " << total_distance << " km." << std::endl;
    
    return 0;
}
