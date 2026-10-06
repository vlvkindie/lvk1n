#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,P;
    
    cout << "Enter legs a and b " ;
    cin >> a >> b;

    c = sqrt(a*a + b*b);
    P= a + b + c;

    cout << "Hypotenuse is " << c << endl ;
    cout << "Perimeter is " << P << endl;

    return 0;
}