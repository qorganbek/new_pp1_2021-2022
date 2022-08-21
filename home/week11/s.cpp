#include <iostream>
using namespace std;
int main () {
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='a' or s[i]=='A'){
			s.erase(i,1);
		}
		else cout<<s[i];
		}
	return 0;
}