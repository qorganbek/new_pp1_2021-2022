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
	int cnt=0;
	for(int i=min;i<max;i++){
		if(min<i && max>i){
			cnt++;
		}
	}
	for(int i=min;i<=max;i++){
		for(int j=0;j<n;j++){
            if(a[j]==i){
            	cnt--;
            }
		}
       
	}
	cout<<cnt+2<<endl;
	return 0;
	}
