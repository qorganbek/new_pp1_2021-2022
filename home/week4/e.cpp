#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char a[n][3 * n];//a[2][6]
    for (int i = 0; i < n; i++) {
        int k = i + 1;
        int j = 0;
        while (k--) {
            a[i][j] = '[';
            a[i][j + 1] = '*';
            a[i][j  +2] = ']';
            j += 3;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3 * (i + 1); j++)
            cout << a[i][j];
        cout << '\n';
    }
    return 0;
}