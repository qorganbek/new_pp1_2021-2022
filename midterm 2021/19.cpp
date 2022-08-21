#include <bits/stdc++.h>

using namespace std;

bool f(int n) {
    while (n > 0) {
        if (n % 10 == 5) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (f(i)) cout << i << ' ';
    }
    return 0;
}