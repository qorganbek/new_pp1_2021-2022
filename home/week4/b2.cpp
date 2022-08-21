#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int maxf=-1e9;
	int maxs=0;
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(maxf<a[i][j]){
				maxf=a[i][j];
			}
		}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>maxs && maxf>a[i][j]){
				maxs=a[i][j];
				
			}
	
			
		}
	}
	if(maxf==maxs){
		cout<<0;
	}
	else cout<<maxs;
}