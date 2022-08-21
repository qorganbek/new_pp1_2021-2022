#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    long long a, b, n;
    cin >> a >> b;
    bool find = false;
    for(int i=-60; i<=60; i++){
        if(a*pow(2,i)==b){
            n=i;
            find = true;
        }   
    } if(find){
        cout << "YES" << " " << n;
    } else{
        cout << "NO";
    }
}