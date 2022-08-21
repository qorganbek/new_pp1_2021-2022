#include <iostream>
using namespace std;
int main () {
	int n,a,b;
	string s;
	int cntupper=0;
	int cntlower=0;
	cin>>n>>a>>b>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' and s[i]<='Z'){
			cntupper+=a;
		}
		else if(s[i]>='a' and s[i]<='z'){
			cntlower+=b;
		}
	}
	if(cntlower>cntupper){
		cout<<cntupper;
	}
	else cout<<cntlower;
	return 0;
}