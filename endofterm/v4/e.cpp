#include <bits/stdc++.h>
using namespace std;

bool cmp(pair< int , pair < int , int > > a , pair < int , pair < int , int >  > b){
	if(a.second.second==b.second.second){
		if(a.second.first==b.second.first){
			return a.first>b.first;
		}
		return a.second.first>b.second.first;
	}
	return a.second.second>b.second.second;
}
int main () {
	int n;
	cin>>n;
	vector < pair < int, pair < int , int > > > v;
	for(int i=0;i<n;i++){
		int n,m,k;
		cin>>n>>m>>k;
		v.push_back(make_pair(n,make_pair(m,k)));
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<"-"<<v[i].second.first<<"-"<<v[i].second.second<<endl;
	}
	return 0;
}