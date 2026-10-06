#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    double s = 0;
    int sign = 1;
    for (int i = 0; i < n; i++) {
        s += sign / (2.0 * i + 1);
        sign = -sign;
    }
    cout << fixed << setprecision(6) << s;
    return 0;
}