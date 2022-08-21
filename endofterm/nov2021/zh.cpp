#include <iostream>
using namespace std;
int main () {
	string s,t;
	cin>>s>>t;
	string o="";
	for(int i=0;i<s.size();i++){
		if(o.size()==3){
			if(o==t){
				cout<<i-3<<" ";
			}
			else {
				o="";
			}
		}
		else {
			o+=s[i];
		}
	}
	return 0;
}