#include <iostream>
using namespace std;
int main() {
   double X,A,Y,B;

   cout << "Enter chocolate weight(X) and price(A) :";
   cin >> X >> A;

   cout << "Enter caramel weight(Y) and price(B) :";
   cin >> Y >> B;

   double price_chocolate=A/X;
   double price_caramel=B/Y;
   double ratio = price_chocolate / price_caramel;

    cout << "price for 1kg of chocolate = " << price_chocolate << endl;
    cout << "price for 1kg of caramel = " << price_caramel << endl;
    cout << "Chocolate is " << ratio << " times more expensive" << endl;

    return 0;
}