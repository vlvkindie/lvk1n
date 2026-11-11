#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || s[i - 1] == ' ') s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    cout << s << "\n";
    return 0;
}
