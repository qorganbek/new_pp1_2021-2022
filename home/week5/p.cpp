#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<s.size();i++){
		if(s[i]=='z')
			s[i]='a';
		else {
			s[i]=s[i]-1;
		}
		cout<<s[i];
	}
}