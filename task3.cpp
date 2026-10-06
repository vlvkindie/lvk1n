#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
        a[i] = a[i - 2] + a[i - 1];
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    return 0;
}