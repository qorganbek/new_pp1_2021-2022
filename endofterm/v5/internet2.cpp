#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int a, b, c, d;
    char e;
    cin >> a >> e >> b >> e >> c >> e >> d;
    if((a >= 0 && a <= 255) && (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255)){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}