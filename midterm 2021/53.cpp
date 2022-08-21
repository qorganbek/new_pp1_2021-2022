#include <iostream>
using namespace std;
int main (){
	string s;
	string s1;
	cin>>s>>s1;
	char a;
	cin>>a;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<s1.size();j++){
			if(s[i]==s1[j]){
				s[i]=a;
			}
		}
	}
	cout<<s;
	return 0;
}