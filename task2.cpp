#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n, first, d;
    std::cin >> n >> first >> d;
    for (int i = 0; i < n; i++)
        a[i] = first + i * d;
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    return 0;
}