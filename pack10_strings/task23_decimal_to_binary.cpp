#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    long long x = 0;
    for (int i = 0; i < s.length(); i++) x = x * 10 + (s[i] - '0');
    string bin = "";
    if (x == 0) bin = "0";
    while (x > 0) {
        bin = char('0' + x % 2) + bin;
        x /= 2;
    }
    cout << bin << "\n";
    return 0;
}
