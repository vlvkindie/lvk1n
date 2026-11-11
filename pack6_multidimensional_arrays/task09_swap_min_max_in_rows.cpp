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

    for (int i = 0; i < m; i++) {
        int jmin = 0, jmax = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] < a[i][jmin]) jmin = j;
            if (a[i][j] > a[i][jmax]) jmax = j;
        }
        int t = a[i][jmin]; a[i][jmin] = a[i][jmax]; a[i][jmax] = t;
    }
    printMatrix(a, m, n);
    return 0;
}
