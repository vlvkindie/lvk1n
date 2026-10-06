#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            std::cout << a[i] << " ";
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 != 0)
            std::cout << a[i] << " ";
    return 0;
}