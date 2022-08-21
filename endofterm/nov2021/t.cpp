#include <bits/stdc++.h>
using namespace std;


bool cmp1(pair < pair< int , int > , int > a, pair < pair < int , int > , int > b){
	if(a.first.first==b.first.first){
		if(a.first.second==b.first.second){
			return a.second>b.second;
		}
		a.first.second>b.first.second;
	}
	return a.first.first>b.first.first;
}

bool cmp2(pair< pair< int , int > ,int > a, pair< pair< int , int > ,int > b){
	if(a.first.first==b.first.first){
		if(a.first.second==b.first.second){
			return a.second<b.second;
		}
		a.first.second<b.first.second;
	}
	return a.first.first<b.first.first;
}


int main () {
	int n;
	cin>>n;
	string s;
	cin>>s;
	multimap< pair < int , int > , int > m;
	for(int i=0;i<n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		m.insert(make_pair(make_pair(x,y),z));
	}
	vector < pair < pair < int , int > , int > >  v (m.begin(),m.end());
	if(s == "dec"){
		sort(v.begin(),v.end(),cmp1);
	}
	else {
		sort(v.begin(),v.end(),cmp2);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
	}
	return 0;
}