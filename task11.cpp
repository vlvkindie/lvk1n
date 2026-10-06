#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N <= 0)
        cout << "error";
    else {
        long long f = 1, s = 0;
        for (int i = 1; i <= N; i++) {
            f *= i;
            s += f;
        }
        cout << s;
    }
    return 0;
}