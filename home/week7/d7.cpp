#include<bits/stdc++.h>


using namespace std;

long long fun(string s, int index){
	if(index==s.size()-1){
		return s[index]-'0' ;
	}

	return s[index]-'0'+fun(s, index+1);

	
}

int main(){
	string s;
	cin>>s;
	
	

	cout<<fun(s, 0);
}