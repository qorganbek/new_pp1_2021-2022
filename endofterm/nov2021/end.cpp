// #include <iostream>
// using namespace std;

// int power(int n){
//     if(n==0) { 
//         return 1;
//     }
//     return 2 * power(n-1);
// }

// int main(){
//     string s; cin >> s;
//     int p = 0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]=='1') { 
//             p += power(s.size()-i-1);
//         }
//     }
//     cout << p;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int p = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            p+=pow(2,s.size()-i-1);
        }
    }
    cout << p;
}
