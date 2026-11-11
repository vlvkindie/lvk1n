#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int bal = 0, answer = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') bal++;
        else if (s[i] == ')') {
            bal--;
            if (bal < 0) { answer = i + 1; break; }
        }
    }
    if (answer == 0 && bal > 0) answer = -1;
    cout << answer << "\n";
    return 0;
}
