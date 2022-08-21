#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[100];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        int pos = s[i].find("@gmail.com");
        if(pos != string::npos){
            s[i].erase(pos,10);
            cout << s[i] << endl;
        }
    }

   return 0;
  }