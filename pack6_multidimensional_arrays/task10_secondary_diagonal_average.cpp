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
    int a[100][100], m;
    cin >> m;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    double s = 0;
    for (int i = 0; i < m; i++) s += a[i][m - 1 - i];
    cout << s / m << "\n";
    return 0;
}
