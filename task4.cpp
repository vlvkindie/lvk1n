#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 0) {
        for (int i = 0; i <= n; i += 2)
            cout << i << " ";
    } else {
        int start = (n % 2 == 0) ? n : n + 1;
        for (int i = start; i <= 0; i += 2)
            cout << i << " ";
    }
    return 0;
}