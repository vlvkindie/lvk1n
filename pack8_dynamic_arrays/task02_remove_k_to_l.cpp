#include <iostream>
using namespace std;

void removeAt(int*& a, int& n, int pos) {
    int* b = new int[n - 1];
    for (int i = 0; i < pos; i++) b[i] = a[i];
    for (int i = pos + 1; i < n; i++) b[i - 1] = a[i];
    delete[] a;
    a = b;
    n--;
}

void insertAt(int*& a, int& n, int pos, int val) {
    int* b = new int[n + 1];
    for (int i = 0; i < pos; i++) b[i] = a[i];
    b[pos] = val;
    for (int i = pos; i < n; i++) b[i + 1] = a[i];
    delete[] a;
    a = b;
    n++;
}

void printArr(int* a, int n) {
    cout << n << ": ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int K, L;
    cin >> K >> L;
    int newN = n - (L - K + 1);
    int* b = new int[newN];
    int p = 0;
    for (int i = 0; i < K - 1; i++) b[p++] = a[i];
    for (int i = L; i < n; i++) b[p++] = a[i];
    delete[] a;
    a = b;
    n = newN;
    printArr(a, n);
    delete[] a;
    return 0;
}
