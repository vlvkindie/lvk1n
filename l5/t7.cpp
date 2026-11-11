#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int A, B;
    cin >> A >> B;
    for (int i = A + 1; i < B; i++)
        for (int j = i + 1; j < B; j++)
            if (a[j] < a[i]) { int t = a[i]; a[i] = a[j]; a[j] = t; }
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}