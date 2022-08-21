#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        string x;
        cin>>x;
        for(int i=0;i<x.size();i++){
            if(x[i] == '0'){
                cnt++;
            }
        }
        n--;
    }
    cout<<cnt;
    return 0;
}