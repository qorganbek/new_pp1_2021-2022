#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m;cin>>n>>m;
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<n*m;i++){
		int x;
		cin>>x;
		v1.push_back(x);
	}
	for(int i=0;i<n*m;i++){
		int x;
		cin>>x;
		v2.push_back(x);
	}
	
	return 0;
}