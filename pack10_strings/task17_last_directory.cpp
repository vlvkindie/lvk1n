#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t p1 = s.rfind('\\');
    size_t p2 = (p1 == 0 || p1 == string::npos) ? string::npos : s.rfind('\\', p1 - 1);
    if (p2 == string::npos) cout << "\\";
    else cout << s.substr(p2 + 1, p1 - p2 - 1);
    cout << "\n";
    return 0;
}
