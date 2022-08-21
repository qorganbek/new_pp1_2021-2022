#include <bits/stdc++.h>

using namespace std;

int main () {
	string s,t;
	cin>>s>>t;
	string r=t;
	int cnt=0;
	if( s == t ){
		cout << 0;
		return 0;
	}
	else if(s.size()!=t.size()){
		cout<<"Understandable have a nice day";
		return 0;
	}
	while(true){
		rotate(t.begin(),t.begin()+1,t.end());
		cnt++;
		if(s == t){
			cout<<cnt;
			return 0;
		}
		else if(t == r){
			cout<<"Understandable have a nice day";
			return 0;	
		}
	}
	return 0;
}