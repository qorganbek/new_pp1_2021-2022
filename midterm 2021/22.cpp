#include <iostream>
using namespace std;
int main (){
	string s;
	getline (cin,s);
	for(int i=s.size();i>=0;i--){
		if(s[i]>='0'&&s[i]<='9'){
			cout<<s[i];
		}
	}
	return 0;
}