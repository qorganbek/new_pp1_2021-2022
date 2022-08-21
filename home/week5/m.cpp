#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	char a;
	cin>>a;
	int b,cnt=0;
	cin>>b;
	for(int i=0;i<s.size();i++){
		if(s[i]==a){
			cnt++;
		}
	}
	if(cnt==b){
		cout<<"YES";
	}
	else cout<<"NO";

	return 0;
}