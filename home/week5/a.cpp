#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;cin>>s;
    int a[2]={0,0};
    for (int i=0;i<s.size();i++){
     if(64<s[i] && s[i]<91){
        a[0]++;
        }
    else
        a[1]++;
       
     }
     cout << a[1] << " " << a[0] <<endl;
    return 0;   
}