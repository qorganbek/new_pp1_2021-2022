#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' and s[i]<='9'){
			return 0;
		}
	}
	return 1;
}




int main ( ) {
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		if(!check(x)){
			v.push_back(x);
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}