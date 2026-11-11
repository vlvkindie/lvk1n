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
            bool hasA = false;
            for (int k = 0; k < w.length(); k++)
                if (tolower(w[k]) == 'a') hasA = true;
            if (hasA) cnt++;
            w = "";
        }
    }
    cout << cnt << "\n";
    return 0;
}
