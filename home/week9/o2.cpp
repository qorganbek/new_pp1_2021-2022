#include <iostream>
#include <map>
using namespace std;
int main (){
	int n;
	cin>>n;
	map<string,string> m;
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		m[a]=b;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string a,b;
		cin>>a>>b;
		if(m.count(a)){
			if(m[a]==b){
				cout<<"correct password"<<endl;
			}
			else cout<<"password error"<<endl;
		}
		else cout<<"login error"<<endl;
	}
	return 0;
}