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
    for (int j = 0; j < n; j++) {
        bool distinct = true;
        for (int i1 = 0; i1 < m - 1; i1++)
            for (int i2 = i1 + 1; i2 < m; i2++)
                if (a[i1][j] == a[i2][j]) distinct = false;
        if (distinct) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
