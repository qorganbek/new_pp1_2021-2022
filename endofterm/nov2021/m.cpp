#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	int n;
	cin>>n;
	map<string,string> m;
	for(int i=0;i<n;i++){
		string s,t;
		cin>>s>>t;
		m[s]=t;
	}
	string s;
	cin>>s;
	for(auto it=m.begin();it!=m.end();it++){
		if((*it).first==s){
			cout<<(*it).second;
		}
	}
	return 0;
}