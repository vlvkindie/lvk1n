#include <iostream>

int main() {
    int N;

    std::cout << "Enter the number of seconds : ";
    std::cin >> N;

    int h = N % 3600;
    int M = h / 60;

    std::cout << "full minutes = " << M << std::endl;
    return 0;
}