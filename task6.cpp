#include <iostream>
#include <string> //для букв
using namespace std;
int main() {
    string A, B, C;

    cout << "Enter values for A,B,C ";
    cin >> A >> B >> C;

    string temp = C;
    C = B;
    B = A;
    A = temp;

    cout << "Result A = " << A << ", B = " << B << ", C = " << C << endl;

    return 0;

}

