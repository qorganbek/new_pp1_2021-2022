#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	int n,m;
	cin>>n;
	map<string ,int> mp;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		mp[x]++;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		string x;
		cin>>x;
		mp[x]++;
	}
	map< string,int >::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		if((*it).second==1){
			cout<<(*it).first<<endl;
		}
	}
	return 0;
}