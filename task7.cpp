#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int s = 0, sign = 1;
    for (int i = 1; i <= n; i++) {
        s += sign * 2 * i;
        sign = -sign;
    }
    cout << s;
    return 0;
}