#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int cnt = 0;
    while (n!=0){
        int c;
        cin>>c;
        if(c%10==7){
            cnt++;
        }
        n--;
    }
    cout<<cnt;
    
    return 0;
}