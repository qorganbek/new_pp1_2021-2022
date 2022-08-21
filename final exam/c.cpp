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
	int max=0;
	int pos;
	for(int i=0;i<v.size();i++){
		if(v[i]>max){
			max=v[i];
			pos=i;
		}
	}
	if(pos == n-1){
		cout<<1;
		return 0;
	}
	int cnt=1;
	for(int i=n-2;i>=pos;i--){
		if(v[n-1]<v[i]){
			v[n-1]=v[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}