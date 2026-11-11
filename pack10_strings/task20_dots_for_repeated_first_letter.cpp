#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char first = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue;
        if (i == 0 || s[i - 1] == ' ') first = s[i];
        else if (s[i] == first) s[i] = '.';
    }
    cout << s << "\n";
    return 0;
}
