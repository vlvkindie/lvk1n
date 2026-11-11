#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t p1 = s.find(' ');
    size_t p2 = (p1 == string::npos) ? string::npos : s.find(' ', p1 + 1);
    if (p1 == string::npos || p2 == string::npos) cout << "";
    else cout << s.substr(p1 + 1, p2 - p1 - 1);
    cout << "\n";
    return 0;
}
