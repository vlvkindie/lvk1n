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

    int bestRow = 0, bestCount = 0;
    for (int i = 0; i < m; i++) {
        int rowBest = 0;
        for (int j = 0; j < n; j++) {
            int c = 0;
            for (int k = 0; k < n; k++)
                if (a[i][k] == a[i][j]) c++;
            if (c > rowBest) rowBest = c;
        }
        if (rowBest > bestCount) { bestCount = rowBest; bestRow = i + 1; }
    }
    cout << bestRow << "\n";
    return 0;
}
