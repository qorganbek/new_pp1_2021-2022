#include <iostream>
#include <algorithm>
using namespace std;
int main (){
string s;
getline (cin,s);
char p=' ';
int cnt=0;
 for(int i=0;i<s.size();i++){
    if(s[i]==p){
        cnt++;
        if(cnt>=2){
        s.erase(i,1);
        cnt=0;
         }
    }
    else{
        cnt=0;
    }
        
      
  }
  cout<<s;
    return 0;
}