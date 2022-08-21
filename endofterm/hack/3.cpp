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

	int k;
	cin>>k;
		for(long unsigned int j=0;j<100000;j++){
			for(long unsigned int i=0;i<n;i++){
			if(v[i]-j==k or v[i]+j==k){
				cout<<v[i];
				return	0;
			}
		}
	}
	return 0;
}