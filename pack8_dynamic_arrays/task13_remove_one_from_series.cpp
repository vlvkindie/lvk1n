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

    int del = 0;
    for (int i = 0; i + 1 < n; i++)
        if (a[i] == a[i + 1] && (i == 0 || a[i] != a[i - 1])) del++;
    int* b = new int[n - del];
    int p = 0;
    for (int i = 0; i < n; i++) {
        bool drop = (i + 1 < n) && a[i] == a[i + 1] && (i == 0 || a[i] != a[i - 1]);
        if (!drop) b[p++] = a[i];
    }
    delete[] a;
    a = b;
    n -= del;
    printArr(a, n);
    delete[] a;
    return 0;
}
