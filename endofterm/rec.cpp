#include <bits/stdc++.h>
using namespace std;
long long k=0;

void sum(vector<int> a,int index){
	k+=a[index];
	if(index==a.size()-1){
		cout<<k;
		return;
	}
	sum(a,index+1);
}

int main () {
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sum(v,0);
	return 0;
}