#include <bits/stdc++.h>
using namespace std;

double cmp(pair<string,double> a , pair<string,double> b){
	if(a.second==b.second){
		return a.first>b.first;
	}
   return a.second>b.second;
} 

int main () {
	int n;
	cin>>n;
	int total=0;
	map < string, double > m;
	for(int i=0;i<n;i++){
		string s;
		int x;
		cin>>s>>x;
		m[s]+=x;
		total+=x;
	}
	vector< pair < string , double > > v(m.begin(),m.end());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second*100/total<<"%"<<endl;
	}
	return 0;
}