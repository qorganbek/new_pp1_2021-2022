#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
long long n, sum=0;
cin >> n;
string s = "";
while(n>0){
	s += to_string(n%10);
	n /= 10;
}   reverse(s.begin(), s.end());
    for(int i = s.size()-1; i>0; i--){
    	 sum += s[i]-48;
    } if(s[0]-48==sum%10){
    	cout << "YES";
    } else{
    	cout << "NO";
    }
}