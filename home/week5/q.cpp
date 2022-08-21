#include <iostream>
#include <cmath>
using namespace std;
int main (){
	string s,t,st="";
	cin>>s>>t;
	for(int i=0;i<ceil(t.size()/s.size());i++){//a aaaa 4/1=4 testset 9/4=3
		st=st+s;
	}
	if(st==t){
		cout<<"YES";
	}
	else cout<<"NO";
	
}