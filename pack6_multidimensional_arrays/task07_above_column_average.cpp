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

    for (int j = 0; j < n; j++) {
        double s = 0;
        for (int i = 0; i < m; i++) s += a[i][j];
        double avg = s / m;
        int cnt = 0;
        for (int i = 0; i < m; i++)
            if (a[i][j] > avg) cnt++;
        cout << cnt << "\n";
    }
    return 0;
}
