#include <iostream>
#include <iomanip>
using namespace std;

double Fact(int n) {
    if (n <= 1) return 1;
    return n * Fact(n - 1);
}

int main() {
    cout << fixed << setprecision(0);
    for (int k = 0; k < 5; k++) {
        int x;
        cin >> x;
        cout << x << "! = " << Fact(x) << "\n";
    }
    return 0;
}
