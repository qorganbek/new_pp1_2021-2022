#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    bool is_prime = true;
    for (int i = 2; i * 1ll * i <= x; i++) {
        if (x % i == 0) {
            cout << "No";
            is_prime = false;
            break;
        } 
    }
    if (is_prime)
        cout << "Yes";
    return 0;
}