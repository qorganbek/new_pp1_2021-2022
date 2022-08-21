#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n]; // 0 1 2 ... n - 1
    for (int i = 0; i < n; i++) cin >> a[i];
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[ind]) {
            ind = i;
        }
    }
    // 2 7 3 3
    // ind = 0
    // 2 * 2
    // a[1] * a[0] -> ind = 1
    // a[2] * a[1]
    // a[3] * a[1]
    cout << ind + 1;
    return 0;
}
