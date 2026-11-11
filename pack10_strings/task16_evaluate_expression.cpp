#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int result = s[0] - '0';
    for (int i = 1; i + 1 < s.length(); i += 2) {
        int d = s[i + 1] - '0';
        if (s[i] == '+') result += d;
        else result -= d;
    }
    cout << result << "\n";
    return 0;
}
