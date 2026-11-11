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

    double s = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) s += a[i][j];
    double avg = s / (m * n);
    int bi = 0, bj = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (fabs(a[i][j] - avg) < fabs(a[bi][bj] - avg)) { bi = i; bj = j; }
    cout << bi + 1 << " " << bj + 1 << "\n";
    return 0;
}
