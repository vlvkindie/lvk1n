 #include <iostream>
using namespace std;
int main() {
    int year;

    cout << " enter a year: ";
    cin >> year;

    int century = (year - 1) / 100 + 1;

    cout << " the year " << year << " belongs to the " << century << endl;

    return 0;
}