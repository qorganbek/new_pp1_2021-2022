#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0;
	int min=101;
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	int cnt=max-min-n+1;
		cout<<cnt;
	return 0;
}