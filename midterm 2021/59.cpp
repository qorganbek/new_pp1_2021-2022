#include <iostream>
#include <algorithm>
using namespace std;
bool isSorted(int n, int a[]) {
	int cnt=0;
	int b[n];
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			cnt++;
		}
	}
	if(cnt==n){
			return 1;
		}
		else return 0;
}

int main (){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(isSorted(n,a)){
		cout<<"Sorted";
	}
	else cout<<"Not sorted";
	return 0;
}