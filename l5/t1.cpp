#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int imax = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > a[imax]) imax = i;
    if (imax > 0) cout << a[imax - 1] << "\n";
    if (imax < n - 1) cout << a[imax + 1] << "\n";

    return 0;
}