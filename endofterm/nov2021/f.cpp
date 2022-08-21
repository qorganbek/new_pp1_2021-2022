#include <bits/stdc++.h>
using namespace std;

bool  have4(int n){
	for(int i=0;i<10000;i++){
		if(pow(4,i)==n){
			return 1;
		}
	}
	return 0;
}

int main () {
	int n;
	cin>>n;
	if(have4(n)){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;
}