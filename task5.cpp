#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int left = 0, right = n - 1;
    while (left <= right) {
        std::cout << a[left] << " ";
        if (left != right)
            std::cout << a[right] << " ";
        left++;
        right--;
    }
    return 0;
}