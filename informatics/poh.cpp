#include <bits/stdc++.h>
using namespace std;
int main (){
    // string a = "Hello";
    // for (int i=0;i<a.size();i++){
    //     if(a[i]>96 and a[i]<123){
    //         a[i] -= 32;
    //     }
    // }
    // cout<<a;
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (int i=0;i<n;i++){
        // if (v[i].size()!=3){
        //     v[i] = "NO";
        // }
        for (int j = 0;j < 3; j++){
            if (64 < v[i][j]and v[i][j] < 91){
                v[i][j]= char(v[i][j] += 32);
            }
        }
    }
    for(int i=0;i<n;i++){
        if (v[i]=="yes"){
            v[i] ="YES";
        }
        else {
            v[i] = "NO";
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
	return 0;
}
