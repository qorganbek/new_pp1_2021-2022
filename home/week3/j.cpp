#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= m) {
            ind = i;
            break;
        }
    }
    if (ind != 0    ) {
        if (a[ind] == m) {
            cout << ind + 1;
        }  else {
            cout << ind;
        }
    }  else {
        cout << n;
    }
    return 0;
}