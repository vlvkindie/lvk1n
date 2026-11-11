#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string S, S0;
    getline(cin, S);
    getline(cin, S0);
    size_t pos = S.find(S0);
    if (pos != string::npos) S.erase(pos, S0.length());
    cout << S << "\n";
    return 0;
}
