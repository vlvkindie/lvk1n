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

    int answer = 0;
    for (int j = 0; j < n; j++) {
        int mx = a[0][j];
        for (int i = 1; i < m; i++)
            if (a[i][j] > mx) mx = a[i][j];
        if (j == 0 || mx < answer) answer = mx;
    }
    cout << answer << "\n";
    return 0;
}
