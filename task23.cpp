#include <iostream>

int main() {
    int K;
    std::cout << "Enter day of the year : ";
    std::cin >> K;

    int dow = (K-1) % 7 + 1;

    std::cout << "Day of week number = " << dow << std::endl;

    return 0;
}