#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    char C;
    string S, S0;
    cin >> C;
    cin.ignore();
    getline(cin, S);
    getline(cin, S0);
    string res = "";
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == C) res += S0;
        res += S[i];
    }
    cout << res << "\n";
    return 0;
}
