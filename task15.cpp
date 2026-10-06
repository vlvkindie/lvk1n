#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool seenBefore = false;
        for (int j = 0; j < i; j++)
            if (a[j] == a[i]) {
                seenBefore = true;
                break;
            }
        if (!seenBefore)
            count++;
    }
    std::cout << count;
    return 0;
}