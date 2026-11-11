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

    int s[100];
    for (int j = 0; j < n; j++) cin >> s[j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = s[j];
    printMatrix(a, m, n);
    return 0;
}
