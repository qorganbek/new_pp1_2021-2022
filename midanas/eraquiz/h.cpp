#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
	char x;
	string s;
	cin>>x>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]==x){
			s.erase(i,1);
		}
		cout<<s[i];
	}
	return 0;
}