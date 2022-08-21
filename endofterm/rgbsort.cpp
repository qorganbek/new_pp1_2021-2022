#include <bits/stdc++.h>
using namespace std;

string rainbow[7]={"red","orange","yellow","blue","green","indigo","purple"};

bool cmp (pair <string ,int > a, pair <string,int> b){
	for(int i=0;i<7;i++){
		if(rainbow[i]==a.first){
			a.first='a'+i;
		}
		if(rainbow[i]==b.first){
			b.first='a'+i;
		}
	}
	if(a.first==b.first){
		return a.second>b.second;
	}
	return a.first<b.first;
}

int main ( ) {
	int n;
	cin>>n;
	multimap<string,int> m;
	for(int i=0;i<n;i++){
		string s;
		int x;
		cin>>s>>x;
		m.insert(make_pair(s,x));
	}
	vector<pair <string,int> > v(m.begin(),m.end());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}