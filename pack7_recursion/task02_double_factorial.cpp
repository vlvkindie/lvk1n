#include <iostream>
#include <iomanip>
using namespace std;

double Fact2(int n) {
    if (n <= 1) return 1;
    return n * Fact2(n - 2);
}

int main() {
    cout << fixed << setprecision(0);
    for (int k = 0; k < 5; k++) {
        int x;
        cin >> x;
        cout << x << "!! = " << Fact2(x) << "\n";
    }
    return 0;
}
