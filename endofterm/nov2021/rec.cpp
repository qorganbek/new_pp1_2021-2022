#include <bits/stdc++.h>
using namespace std;

int check (vector<int> v,int max,int i,int k){
	if(i!=v.size()-1){
		if(v[i]>max){
			max=v[i];
			k=i+1;
		}
		else {
			check(v,max,i+1,k);
		}
	}
	else{
		return k;
	}
}

int main ( ) {
	int n;cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	 int max=-1e9;
	 int k=0;
	 cout<<check(v,max,0,k);
	// int l;
	// for(int i=0;i<n;i++){
	// 	if(v[i]>max){
	// 		max=v[i];
	// 		l=i;
	// 	}
	// }
	// cout<<l+1;
	return 0;
}