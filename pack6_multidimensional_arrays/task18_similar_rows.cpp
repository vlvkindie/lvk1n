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

    bool first[101] = {false};
    for (int j = 0; j < n; j++) first[a[0][j]] = true;
    int cnt = 0;
    for (int i = 1; i < m; i++) {
        bool has[101] = {false};
        for (int j = 0; j < n; j++) has[a[i][j]] = true;
        bool same = true;
        for (int v = 0; v <= 100; v++)
            if (has[v] != first[v]) same = false;
        if (same) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
