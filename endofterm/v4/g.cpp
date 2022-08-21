#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v1.push_back(x);
	}
	cin>>m;
	vector<int> v2;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		v2.push_back(x);
	}
	for(int i=0;i<v1.size();i++){
		v2.push_back(v1[i]);
	}
	sort(v2.begin(),v2.end());
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
	return 0;
}