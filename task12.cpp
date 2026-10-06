#include <iostream>

int main() {
    const int SIZE = 100;
    int a[SIZE], n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int imin = 0, imax = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[imin]) imin = i;
        if (a[i] > a[imax]) imax = i;
    }
    int left = imin < imax ? imin : imax;
    int right = imin < imax ? imax : imin;
    for (int i = left + 1; i < right; i++)
        a[i] = 0;
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    return 0;
}