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

    int top = 0, bottom = m - 1, lft = 0, rgt = m - 1;
    while (top <= bottom && lft <= rgt) {
        for (int j = lft; j <= rgt; j++) cout << a[top][j] << " ";
        top++;
        for (int i = top; i <= bottom; i++) cout << a[i][rgt] << " ";
        rgt--;
        for (int j = rgt; j >= lft; j--) cout << a[bottom][j] << " ";
        bottom--;
        for (int i = bottom; i >= top; i--) cout << a[i][lft] << " ";
        lft++;
    }
    cout << "\n";
    return 0;
}
