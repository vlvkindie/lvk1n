#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= '0' && s[i] <= '9') cnt++;
    cout << cnt << "\n";
    return 0;
}
