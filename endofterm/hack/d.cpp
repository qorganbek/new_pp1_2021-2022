#include <bits/stdc++.h>
using namespace std;

double cmp(pair<string,double> a , pair<string,double> b){
	if(a.second==b.second){
		return a.first<b.first;
	}
   return a.second>b.second;
} 


int main () {
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' and s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	int total=1;
	map<string,double> m;
	string t="";
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			t+=s[i];
		}
		else {
			m[t]++;
			total++;
			t="";
		}
	}
	m[t]++;
	map<string,double>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		(*it).second=(*it).second*100/total;
	}
	vector<pair<string,double>> v(m.begin(),m.end());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" : "<<v[i].second<<"%"<<endl;
	}
	return 0;
}