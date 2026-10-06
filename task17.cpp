#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of seconds : ";
    cin >> N;

    int full_hours = N / 3600;

    cout << "Full hours = " << full_hours << endl;
    return 0;
}