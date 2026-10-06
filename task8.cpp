#include <iostream>
using namespace std;
int main() {
    int A,B;
    cout << "Enter lenghts of segments A and B (A>B):";
    cin >> A >> B;
    int rem = A % B;

    cout << "remainder = " << rem << endl;

    return 0;
}