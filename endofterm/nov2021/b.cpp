#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
	string t = "",s = "";
		int x,y;
		cin>>x>>y;
		t+=to_string(x);
		s+=to_string(y);
		reverse(t.begin(),t.end());
		reverse(s.begin(),s.end());
		int k=stoi(t)+stoi(s);
		string sr="";
		sr+=to_string(k);
		reverse(sr.begin(),sr.end());
		k=stoi(sr);
		v.push_back(k);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}