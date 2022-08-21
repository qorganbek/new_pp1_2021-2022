#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n, cnt1=0, cnt2=0;
	cin >> n;
	string s = "";
	while(n>0){
		s += to_string(n%2);
		n /= 2;
	}   reverse(s.begin(), s.end());
		cout << s << endl;
	    for(int i=0; i<s.size(); i++){
	    	if(s[i]=='1'){
	    		cnt1++;
	    	} if(s[i]=='0'){
	    		cnt2++;
	    	}
	    }	cout << " zeros " << cnt2 << endl;
	    	cout << " number of units " << cnt1 << endl;
	    }