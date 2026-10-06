#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter four digit number : ";
    cin >> num;

    int h = (num/100) % 10;
    cout << "Result : " << h << endl;

    return 0;
}     