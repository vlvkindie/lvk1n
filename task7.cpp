#include <iostream>
using namespace std;
int main() {
    int bytes;
    
    cout << "Enter file size in bytes ";
    cin >> bytes;

    int kilobytes = bytes/1024;
    
    cout << "Full Kilobytes " << kilobytes << endl;

    return 0;
}