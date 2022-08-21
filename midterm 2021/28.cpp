#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
  string s;
  cin >> s;
  string t = "" , p = "";
  for(int i=0; i<s.size(); i++){
    if(s[i]=='1'){
      t += s[i];
    } else{
      p += s[i];
    }
  } cout << t+p << endl;
}