#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
			s[i]=s[i]+n;
			if(s[i]>90){
				s[i]=s[i]-26;
			}
		cout<<s[i];
	}
}