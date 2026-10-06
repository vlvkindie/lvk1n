#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n, k, l;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    std::cin >> k >> l;
    int s = 0;
    for (int i = k - 1; i <= l - 1; i++)
        s += a[i];
    std::cout << (double)s / (l - k + 1);
    return 0;
}