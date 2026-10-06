#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    bool found = false;
    int best = 0;
    for (int i = 1; i < n - 1; i++)
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
            if (!found || a[i] > best) {
                best = a[i];
                found = true;
            }
    if (found) std::cout << best;
    else std::cout << 0;
    return 0;
}