#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter three digit number : ";
    cin >> num;

    int h = num/100;
    int t = (num/10)%10;
    int u = num % 10;

    int new_num = t * 100 + h * 10 + u;

    cout << "Result = " << new_num << endl;

    return 0;
}