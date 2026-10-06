#include <iostream>
using namespace std;
int main() {
    long long b;
    cin >> b;
    long long result = 0, power = 1;
    while (b > 0) {
        result += (b % 10) * power;
        power *= 2;
        b /= 10;
    }
    cout << result;
    return 0;
}