#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a , pair<string,int> b){
		return a.second>b.second;
} 




int main () {
	string s;
	getline(cin,s);
	string t="";
	map<string,int> m;
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			t+=s[i];
		}
		else {
			m[t]++;
			t="";
		}
	}
	m[t]++;
	vector<pair <string,int> > v(m.begin(),m.end());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" : "<<v[i].second<<endl;
	}
	return 0;
}