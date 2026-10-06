#include <iostream>

using namespace std;

int main(){
    double R;
    double L;
    double S;
    const double PI=3.14;

    cout << "Enter the radius (R):" ;
    cin >> R;

    L = 2 * PI * R ;
    S = PI * R * R ;

    cout << "The circumference L = "<< L << endl;
    cout << "The circle area = " << S << endl;
    
    return 0;
}