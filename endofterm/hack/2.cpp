#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int k;
	cin>>k;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(k==v[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}