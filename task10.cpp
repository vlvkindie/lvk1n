#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) {
            std::cout << i + 1 << " ";
            count++;
        }
    std::cout << std::endl << count;
    return 0;
}