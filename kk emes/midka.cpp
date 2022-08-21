#include <iostream>
using namespace std;

int main(){

    string s;

    getline (cin,s);

    for(int i=s.size();i>0;--i){
        if(s[i]>47 && s[i]<58){
            cout<<s[i]<<" ";
        }
    }
}