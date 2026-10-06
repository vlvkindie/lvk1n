#include <iostream>
using namespace std;
int main() {
    int x, count = 0;
    int s = 0;
    cin >> x;
    while (x != 0) {
        s += x;
        count++;
        cin >> x;
    }
    cout << s << endl;
    if (count > 0)
        cout << (double)s / count;
    return 0;
}