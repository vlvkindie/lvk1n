#include <iostream>

int main() {
    int month, year;
    std::cin >> month >> year;

    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (month == 2 && isLeap) std::cout << 29;
    else std::cout << days[month - 1];

    return 0;
}