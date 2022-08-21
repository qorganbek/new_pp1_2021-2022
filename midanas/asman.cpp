#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	int n,mo;
	cin>>n>>mo;
	if(n==0 or mo==0){
		cout<<"error";
		return 0;
	}
	vector < pair < string , int > > m;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int x;
		int cnt=0;
		for(int j=0;j<mo;j++){
			cin>>x;
			cnt+=x;
		}
		m.push_back(make_pair(s,cnt));
	}
	string k=m[0].first;
	int max=m[0].second;
	for(int i=0;i<n;i++){
		if(m[i].second>max){
			max=m[i].second;
			k=m[i].first;
		}
	}
	for(int i=0;i<n;i++){
		cout<<m[i].first<<" "<<m[i].second<<endl;
	}
	cout<<"The best:"<<endl;
	cout<<k<<" "<<max;
	return 0;
}