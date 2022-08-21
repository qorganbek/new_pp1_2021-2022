#include <iostream>
using namespace std;
int main (){
	string s;
	int cnt=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}