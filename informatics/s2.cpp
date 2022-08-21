#include <iostream>
#include <algorithm>
using namespace std;
int main (){
string s;
getline (cin,s);
char p=' ';
int size ;
int cnt=0;
for(int i=0;i<s.size();i++){
  if(s[i]>='a'&&s[i]<='z'){
    cnt++;
  }
  if(s[i]==p){
    cnt=size;
    cnt=0;
  }

  }
    return 0;
}