#include <bits/stdc++.h>
using namespace std;
int main(){
char alp[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int cntalp[26] = {0};
string s;
getline(cin,s);
for(int i=0; i<s.size(); i++){
      if(s[i]>='A' and s[i]<='Z')
        cntalp[s[i]-65]++;
       else
        cntalp[s[i]-97]++;
    }

    vector <pair<int,char>> v;
    for(int i=0; i<26; i++){
      if(cntalp[i]!=0)
        v.push_back(make_pair(cntalp[i], alp[i]));
    }   

    set<int> st;
    for(auto it : v){
      st.insert(it.first);
    }
    if(st.size()==1){
      cout << "All gone!";
      return 0;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    int max = v[0].first;

    
    for(int i=0; i<s.size(); i++){
      for(auto it : v){
        if(max!=it.first){
          if(s[i]>='A' && s[i]<='Z'){
            if(s[i]+32==it.second){
              cout << s[i];
            }
          } else{
              if(s[i]==it.second){
                cout << s[i];
              }
          }
        } 
      }
    }
  }