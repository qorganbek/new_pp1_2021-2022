#include <string>
#include <iostream>
using namespace std;
int main (){
	string s;
	while(cin>>s){
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			cout<<s[i];
		}
	}
	cout<<endl;
}
	return 0;
}