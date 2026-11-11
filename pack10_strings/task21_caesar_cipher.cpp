#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int K;
    cin >> K;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = 'A' + (s[i] - 'A' + K) % 26;
        else if (s[i] >= 'a' && s[i] <= 'z') s[i] = 'a' + (s[i] - 'a' + K) % 26;
    }
    cout << s << "\n";
    return 0;
}
