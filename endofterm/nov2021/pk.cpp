#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt[10]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<10;i++){
		if(cnt[i]==1){
			cout<<i<<" ";
		}
	}
	return 0;
}