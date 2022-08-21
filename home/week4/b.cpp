#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int fmax = 0, smax = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > fmax) {
                smax = fmax;
                fmax = a[i][j];
            }  else if (a[i][j] > smax && a[i][j] != fmax) {
                smax = a[i][j];
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ok &= (a[i][j] == fmax);
        }
    }

    if (ok) {
        cout << 0;
    }
    else 
        cout << smax;
    return 0;
}