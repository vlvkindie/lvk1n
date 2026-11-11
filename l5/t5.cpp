#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt[10] = {0};
    for (int i = 0; i < n; i++) cnt[a[i]]++;
    int ans = 1;
    for (int v = 2; v <= 9; v++)
        if (cnt[v] >= cnt[ans]) ans = v;
    cout << ans;

    return 0;
}