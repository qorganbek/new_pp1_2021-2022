#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	string s,t="";
	int k;
	vector <int> v;
	vector < pair <  pair <int , int >, int > > m;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]!='-'){
				t+=s[i];
			}
			else{
				k=stoi(t);
				if(i == 1){
					v.push_back(k);
					t="";
				}
				else if(i==4){
					v.push_back(k);
					t="";
				}
			}
		}
		t="";
		v.push_back(k);
		m.push_back(make_pair(make_pair(v[0],v[1]),v[2]));
		v.clear();
	}
	for(int i=0;i<n;i++){
		cout<<m[i].first.first<<"-"<<m[i].first.second<<"-"<<m[i].second<<endl;
	}
	return 0;
}