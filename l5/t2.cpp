#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int imax = 0, imin = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[imax]) imax = i;
        if (a[i] <= a[imin]) imin = i;
}
    int t = a[imax]; a[imax] = a[imin]; a[imin] = t;
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}