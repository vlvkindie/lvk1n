#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    if (n < 2) {
        std::cout << n;
        return 0;
    }
    int segments = 1;
    int direction = 0;
    for (int i = 0; i < n - 1; i++) {
        int step;
        if (a[i + 1] > a[i]) step = 1;
        else if (a[i + 1] < a[i]) step = -1;
        else continue;
        if (direction != 0 && step != direction)
            segments++;
        direction = step;
    }
    std::cout << segments;
    return 0;
}