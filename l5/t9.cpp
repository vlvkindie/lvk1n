#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int imin = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[imin]) imin = i;
    for (int i = imin; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[i]) { int t = a[i]; a[i] = a[j]; a[j] = t; }
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}