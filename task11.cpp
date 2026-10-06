#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a three-digit number : ";
    cin >> num;

    int middle_digit = (num / 10)%10;

    cout << "middle digit is = " << middle_digit << endl;

    return 0;
}