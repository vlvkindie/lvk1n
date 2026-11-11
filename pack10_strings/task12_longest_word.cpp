#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string best = "";
    string w = "";
    int len = s.length();
    for (int i = 0; i <= len; i++) {
        if (i < len && isalpha(s[i])) w += s[i];
        else if (!w.empty()) {
            if (w.length() > best.length()) best = w;
            w = "";
        }
    }
    cout << best << " " << best.length() << "\n";
    return 0;
}
