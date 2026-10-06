#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    bool seen[SIZE + 1] = {false};
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < 1 || a[i] > n || seen[a[i]]) {
            ok = false;
            break;
        }
        seen[a[i]] = true;
    }
    std::cout << (ok ? "true" : "false");
    return 0;
}