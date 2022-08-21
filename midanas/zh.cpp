#include <iostream>
using namespace std;
int main (){
	int n,m;
	int a[n],b[m];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(b[i]==a[j]+a[k]){
					cout<<"YES";
				}
				else cout<<"NO";
			}
		}
	}
	return 0;
}