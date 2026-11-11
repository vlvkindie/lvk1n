#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    long long result = 0;
    for (int i = 0; i < s.length(); i++)
        result = result * 2 + (s[i] - '0');
    cout << result << "\n";
    return 0;
}
