
#include <bits/stdc++.h>
using namespace std;
int cnt[10000000];
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cnt[a[i]]++;
    // cnt[1] = 2, cnt[4] = 1, cnt[5] = 1, cnt[6] = 1, cnt[7]= 1, cnt[8] = 1, cnt[10] = 1, cnt[11] = 1;
    for (int i = 1e4; i >= 1; i--) {
        if (cnt[i] > 0) {
            while (cnt[i] > 0) {
                cout << i << ' ';
                cnt[i]--;
            }
        }
    }
    // O(n)
    return 0;
}