#include <iostream>
#include <cmath>
using namespace std;

void printMatrix(int a[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    int a[100][100], m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int k;
    cin >> k;
    k--;
    long long sum = 0, prod = 1;
    for (int j = 0; j < n; j++) { sum += a[k][j]; prod *= a[k][j]; }
    cout << sum << " " << prod << "\n";
    return 0;
}
