#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 0)
        n = -n;
    bool found = false;
    while (n > 0) {
        if (n % 10 == 2)
            found = true;
        n /= 10;
    }
    if (found)
        cout << "yes";
    else
        cout << "no";
    return 0;
}