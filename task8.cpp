#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    if (n < 2) {
        std::cout << 0;
        return 0;
    }
    int d = a[1] - a[0];
    bool ok = true;
    for (int i = 1; i < n - 1; i++)
        if (a[i + 1] - a[i] != d) {
            ok = false;
            break;
        }
    std::cout << (ok ? d : 0);
    return 0;
}