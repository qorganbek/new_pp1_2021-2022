#include <iostream>
using namespace std;

void pal(string s,int k){
   string st="";
   if(k!=-1){
    st+=s[k];
    pal(s,k-1);
   }
    if(s==st){
      cout<<"Yes";
    }
    else {
      cout<<"No";
    return;
      }
}


int main (){
    string s;
    // string st="";
    cin>>s;
    // for(int i=s.size()-1;i>=0;i--){
    //   st+=s[i];
    // }
    // if(st==s){
    //   cout<<"Yes";
    // }
    // else cout<<"No";
    int k=s.size()-1;
    pal(s,k);

  return 0;
}