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

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        bool ok = true;
        for (int j = 0; j < n - 1; j++)
            if (a[i][j] >= a[i][j + 1]) ok = false;
        if (ok) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
