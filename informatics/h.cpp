#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void Digits(string s) {
    bool ok = true;
    sort(s.begin(), s.end()); //1231232 -> 11 222 33
    int c = 1; //count
    int i = 0;
    int p = 0; //check point 2
    
    while(i < s.size()-1) {
        if (s[i] == s[i + 1]){
            c++;
        } 

        if (s[i] != s[i + 1] ) {
            if(p == 0) {
                p = c;
                c = 1;
            } else {
                if(p == c) {
                    c = 1;
                } else {
                    ok = false;
                    break;
                } 
            } 
        }  
        i++;
    } 


    if(ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
} 

int main(){
    string s;
    cin >> s;
    Digits(s);
}