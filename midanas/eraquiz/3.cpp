#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cntnum[1001];
	for (int i=0;i<1001;i++){
		cntnum[i]=0;	
	}
	for(int i=0;i<n;i++){
		int d=a[i];
		cntnum[d]++;
	}
	int max=-1e9;
		for (int i=0;i<1001;i++){
		if(max<cntnum[i]){
			max=cntnum[i];
		}
	}
	for(int i=0;i<1001;i++){
		if(max=cntnum[i]){
			cout<<i<<" ";
		}
	}


return 0;
}