#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sum = 0;
    for (int i = 0; i < s.length(); i++) sum += s[i] - '0';
    cout << sum << "\n";
    return 0;
}
