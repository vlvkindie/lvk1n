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
    int m = a[1];
    for (int i = 3; i < n; i += 2)
        if (a[i] < m)
            m = a[i];
    std::cout << m;
    return 0;
}