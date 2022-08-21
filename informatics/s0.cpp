#include <iostream>
#include <string>
using namespace std;
int main (){
	string s;
	getline (cin,s);
	int cnt=0;
	string str="";
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			str+=s[i];
			cnt=0;
		}
		else {
			cnt++;
			if(cnt==1){
				str+=' ';
			}
		}
	}
	cout<<str;
}