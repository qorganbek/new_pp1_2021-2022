#include <iostream>
using namespace std;

bool IsSolution(int n){
	int a[10]={0};
	while(n!=0){
		int k=n%10;
		a[k]++;
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
	int n;
	cin>>n;
	for(int i=n+1;i<10000;i++){
		if(IsSolution(i)){
			cout<<i;
			return 0;
		}
	}
	return 0;
}