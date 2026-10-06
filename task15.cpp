#include <iostream>
using namespace std;
int main() {
    int K;
    cout << "Enter day of week : ";
    cin >> K;

    int dow = (K + 1)% 7;

    if (dow == 0)
    {dow=7;}
    
    cout << "Day of week number = " << dow << endl;

    return 0;
}