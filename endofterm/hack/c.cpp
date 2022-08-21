#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> f;
    string s;
    getline(cin,s);
    int cntlet[26]={0};
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z'){
            cntlet[s[i]-65]++;
        }
        else if(s[i]>='a' and s[i]<='z'){
            cntlet[s[i]-97]++;
        }
    }
    set<int> sk;
    for(int i=0;i<26;i++){
        if(cntlet[i]!=0){
            sk.insert(cntlet[i]);
        }
    }
    //  int maxi=0;
    // for(auto it=sk.begin();it!=sk.end();it++){
    //     if((*it)>maxi){
    //         maxi=(*it);
    //     }
    // }
    // for(int i=0;i<26;i++){
    //     if(cntlet[i]==maxi){
    //         f.push_back(i);
    //     }
    // }
    if(sk.size()==1){
        cout<<"All gone!";
        return 0;
    }
    int max=-1e9;
    int k;
    for(int i=0;i<26;i++){
        if(cntlet[i]>max){
            max=cntlet[i];
            k=i;
        }
    }
    for(int i=0;i<s.size();i++){
        for(int j=0;j<v.size();j++){}
        if(s[i]==char(k+65) or s[i]==char(k+97)){
           continue;
        }
        else cout<<s[i];
    }
    return 0;
}