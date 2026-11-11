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

    for (int j = 1; j < m; j++)
        for (int i = m - j; i < j; i++)
            a[i][j] = 0;
    printMatrix(a, m, m);
    return 0;
}
