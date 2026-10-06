#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 1; i < n - 1; i++)
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            std::cout << i + 1;
            return 0;
        }
    std::cout << 0;
    return 0;
}