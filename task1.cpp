#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    int p = 1;
    for (int i = 0; i < n; i++) {
        p = p * 2;
        a[i] = p;
    }
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    return 0;
}