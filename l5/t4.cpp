#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int cur = 0, best = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cur++;
            if (cur > best) best = cur;
        }  else cur = 0;
}
    cout << best;

    return 0;
}