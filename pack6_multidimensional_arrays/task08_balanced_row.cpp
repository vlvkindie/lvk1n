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

    int ans = 0;
    for (int i = 0; i < m; i++) {
        int pos = 0, neg = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0) pos++;
            else if (a[i][j] < 0) neg++;
        }
        if (pos == neg) { ans = i + 1; break; }
    }
    cout << ans << "\n";
    return 0;
}
