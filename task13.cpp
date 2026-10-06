#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int sign = 1;
    if (a < 0) {
        sign = -1;
        a = -a;
    }
    int s = 0;
    while (a > 0) {
        s += a % 10;
        a /= 10;
    }
    cout << s * sign;
    return 0;
}