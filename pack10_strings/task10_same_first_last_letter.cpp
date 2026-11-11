#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    string w = "";
    int len = s.length();
    for (int i = 0; i <= len; i++) {
        if (i < len && isalpha(s[i])) w += s[i];
        else if (!w.empty()) {
            if (tolower(w[0]) == tolower(w[w.length() - 1])) cnt++;
            w = "";
        }
    }
    cout << cnt << "\n";
    return 0;
}
