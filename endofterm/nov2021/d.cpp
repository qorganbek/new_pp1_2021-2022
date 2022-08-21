#include <bits/stdc++.h>
using namespace std;

bool check(int i,int n){
	int k=0;
	while(i!=0){
		k+=i%10;
		i/=10;
	}
	if(k==n){
		return 1;
	}
	return 0;

}

int main () {
	int n;
	cin>>n;
	for(int i=100;i<1000;i++){
		if(check(i,n)){
			cout<<i<<endl;
		}
	}
	return 0;
}