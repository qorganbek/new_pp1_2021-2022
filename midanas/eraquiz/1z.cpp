#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	int cnt=max-min-n+1;
	cout<<cnt<<endl;
	//cout<<max<<endl;
	//cout<<min<<endl;
	return 0;
	}
