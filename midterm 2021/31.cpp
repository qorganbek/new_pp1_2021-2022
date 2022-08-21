#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
	string s="";
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=to_string(a[i]);
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			s.erase(i,1);
		}
	}
	string str=s.substr(0,s.size()/2);
	string str2=s.substr(s.size()/2,s.size()/2);
	if(str==str2){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}