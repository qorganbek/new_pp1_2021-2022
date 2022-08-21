#include <iostream>
using namespace std;
int main (){
	string s,t="";
	cin>>s;
	for(int i=s.size()-1;i>=0;i--){
     t=t+s[i] ; 
	}
	if(t==s){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}