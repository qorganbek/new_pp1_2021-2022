#include <iostream>
using namespace std;
int main (){
	int n,k;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int i=0;i<n;i++){
		if(a[i]>k){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}