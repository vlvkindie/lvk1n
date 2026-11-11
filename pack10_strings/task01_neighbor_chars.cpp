#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    char c;
    cin.get(c);
    cout << (char)(c - 1) << " " << (char)(c + 1) << "\n";
    return 0;
}
