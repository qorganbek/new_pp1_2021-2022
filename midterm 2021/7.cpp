#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,n,b,k;
    string sa = "", sb = "";
    cin >> a >> n >> b >> k;
    while(a>0){
        sa += to_string(a%2);
        a /= 2;
    }   
    while(b>0){
        sb += to_string(b%2);
        b /= 2;
    }   
        while(8>sb.size()){
            sb += '0';
        }   while(8>sa.size()){
            sa += '0';
        }   reverse(sa.begin(), sa.end());
            reverse(sb.begin(), sb.end());

           // cout << sa << " " << sb << endl;

            if(sa[sa.size()-n-1]==sb[sb.size()-k-1]){
                cout << "Thunderclap and Flash!";
            } else{
                cout << "Thunder Breathing... First form...";
            }
        }