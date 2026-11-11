#include <iostream>
using namespace std;

int calls = 0;

int Fib1(int n) {
    calls++;
    if (n <= 2) return 1;
    return Fib1(n - 2) + Fib1(n - 1);
}

int main() {
    for (int k = 0; k < 5; k++) {
        int n;
        cin >> n;
        calls = 0;
        int f = Fib1(n);
        cout << "F(" << n << ") = " << f << ", calls = " << calls << "\n";
    }
    return 0;
}
