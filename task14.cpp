#include <iostream>
#include <string>


int main() {
    int n;
    std::cin >> n;

    std::string parity = (n % 2 == 0) ? "even" : "odd";

    std::string digits;
    if (n < 10) digits = "one-digit";
    else if (n < 100) digits = "two-digit";
    else digits = "three-digit";

    std::cout << parity << " " << digits << " number";
    return 0;
}