#include <bits/stdc++.h>
using namespace std;

bool check(int n,vector<int> v){
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]+v[j]==n){
				return 1;
			}
		}
	}
	return 0;
}

int main () {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	int m;
	cin>>m;
	vector<int> v2;
	for(int i=0;i<m;i++){
		int x;cin>>x;
		v2.push_back(x);
	}
	for(int i=0;i<m;i++){
		if(check(v2[i],v)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}