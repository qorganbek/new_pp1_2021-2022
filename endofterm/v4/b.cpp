#include <bits/stdc++.h>
using namespace std;

bool check(int n){
	int a[10]={0};
	while(n!=0){
		a[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(a[i]>1){
			return 0;
		}
	}
	return 1;
}



int main () {
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(check(i)){
			cout<<i;
			return 0;
		}
	}
	cout<<"Understandable, have a great day";
	return 0;
}