#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s,t;
		cin>>s>>t;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a' or s[i]<='z'){
				s[i]-=32;
			}
		}
		for(int i=0;i<t.size();i++){
			if(t[i]>='A' or t[i]<='Z'){
				t[i]-=32;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='P'){
				s[i]='B';
			}
			else if(s[i]='I'){
				s[i]='E';
			}
		}
		if(s==t){
			cout<<"YES";
		}
		else cout<<"NO";
	}
	return 0;
}