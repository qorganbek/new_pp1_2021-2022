#include <iostream>
#include <map>
using namespace std;
int main () {
	int n;
	cin>>n;
	map<string,int> m;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		m[s]++;
	}
	int cnt=0;
	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		if((*it).second>1){
			cout<<(*it).first<<endl;
			cnt++;
		}
	}
	if(cnt==0){
		cout<<"Understandable, have a great day";
	}
	return 0;
}