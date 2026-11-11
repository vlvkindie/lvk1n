#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string words[100];
    int k = 0;
    istringstream in(s);
    string w;
    while (in >> w) words[k++] = w;
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (words[j] < words[i]) {
                string t = words[i]; words[i] = words[j]; words[j] = t;
            }
    for (int i = 0; i < k; i++) {
        if (i > 0) cout << " ";
        cout << words[i];
    }
    cout << "\n";
    return 0;
}
