#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int m,k;
	cin>>m>>k;
	vector<int> v2(v.begin(),v.begin()+k-1);
	v2.push_back(m);
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
	for(int i=k-1;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}