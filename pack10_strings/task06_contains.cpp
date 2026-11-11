#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string S, S0;
    getline(cin, S);
    getline(cin, S0);
    if (S.find(S0) != string::npos) cout << "TRUE\n";
    else cout << "FALSE\n";
    return 0;
}
