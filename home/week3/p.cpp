
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    // 100, 25
    // 101
    // 400 -> 20
    //(int)sqrt(120) = 10
    // 3 -> (INT)1,72... -> 1 
    // 1 * 1 v 3
    // sqrt(4) = 2.0000
    // 2 * 2 v 4
    if ((int)sqrt(x) * 1ll * (int)sqrt(x) == x) {
        cout << "Yes\n";
    }  else {
        cout << "No\n";
    }
    // int i = 1;
    // while (i * 1ll * i < x) {
    //     i++;
    // }
    // // i * i >= x
    // if (i * i == x) cout << "Yes\n";
    // else cout << "No";
    return 0;
}