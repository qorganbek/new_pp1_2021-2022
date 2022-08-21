#include <bits/stdc++.h>
using namespace std;

bool find(int n){
	int cntnum[10]={0};
	while(n>0){
		cntnum[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(cntnum[i]>1){
			return 0;
		}
	}
	return 1;
} 


int main () {
	int n;
	cin>>n;
	for(int i=n+1;i<10000;i++){
		if(find(i)){
			cout<<i;
			return 0;
		}
	}
	return 0;
}