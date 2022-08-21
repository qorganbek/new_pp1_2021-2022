#include <iostream>
using namespace std;
int main (){
    int n;cin>>n;
    int a[n][n];
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-num){
                cout<<num;
                
            }
            else { cout <<"." ;
            }
        } cout<<endl;
        
        num++;
    }
}