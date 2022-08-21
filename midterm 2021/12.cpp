#include<bits/stdc++.h>
using namespace std;
int main() {
    long long d,c,n,di,ci;
    cin >> d >> c >> n >> di >> ci;
    if(ci<c*n){
        while(ci<c*n){
        ci+=100;
        di-=1;  
    }
} 
double you=di+(ci)/100;
double cost=(d+di/100)*n;
if(you<cost){
    cout<< -1;
    return 0;
}
cout << di - d*n << " " << ci - c*n;
}
