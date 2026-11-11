#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string S, S1, S2;
    getline(cin, S);
    getline(cin, S1);
    getline(cin, S2);
    if (!S1.empty()) {
        size_t pos = 0;
        while ((pos = S.find(S1, pos)) != string::npos) {
            S.replace(pos, S1.length(), S2);
            pos += S2.length();
        }
    }
    cout << S << "\n";
    return 0;
}
