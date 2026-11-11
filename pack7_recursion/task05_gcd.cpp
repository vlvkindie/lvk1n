#include <iostream>
using namespace std;

int NOD(int a, int b) {
    if (b == 0) return a;
    return NOD(b, a % b);
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << NOD(A, B) << "\n";
    cout << NOD(A, C) << "\n";
    cout << NOD(A, D) << "\n";
    return 0;
}
