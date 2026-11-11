#include <iostream>
using namespace std;

double PowerN(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / PowerN(x, -n);
    return x * PowerN(x, n - 1);
}

int main() {
    double x;
    int n;
    cin >> x >> n;
    cout << PowerN(x, n) << "\n";
    return 0;
}
