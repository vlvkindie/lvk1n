#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a two-digit number : ";
    cin >> num;

    int tens = num / 10;
    int units = num % 10;

    int sum = tens + units;
    int product = tens * units;

    cout << "sum of digits = " << sum << endl;
    cout << "product of digits = " << product << endl;

    return 0;
}