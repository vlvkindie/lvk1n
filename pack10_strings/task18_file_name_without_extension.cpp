#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t p = s.rfind('\\');
    string name = (p == string::npos) ? s : s.substr(p + 1);
    size_t dot = name.rfind('.');
    if (dot != string::npos) name = name.substr(0, dot);
    cout << name << "\n";
    return 0;
}
