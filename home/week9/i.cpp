// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     map<string,int> m;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         if(m.count(s)){
//             cout<<"user already exists";
//         }
//         else {
//             cout<<"new user added";
//             m[s]=1;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>mp;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        if(mp.count(name)){ // mp.count(x) - check if key exists
            cout << "user already exists\n";
        }
        else{
            cout << "new user added\n";
            mp[name] = 1;
        }
    }
}