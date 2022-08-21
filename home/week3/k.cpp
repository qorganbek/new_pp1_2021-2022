#include <iostream>
using namespace std;
int a[100000];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int prev = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != prev) {
            cout << a[i] << ' ';
            prev = a[i];
        }
    }
    return 0;
}