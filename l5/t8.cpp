#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i += 2)
        for (int j = i + 2; j < n; j += 2)
            if (a[j] < a[i]) { int t = a[i]; a[i] = a[j]; a[j] = t; }
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}