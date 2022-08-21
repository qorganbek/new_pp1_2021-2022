#include <iostream>
#include <cmath>
using namespace std;

int main(){
double n, k ; cin >> n >> k ;
if (n <= k )
    cout << 2;
else 
    cout << ceil((n*2)/k);
}