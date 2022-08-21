#include <iostream>
#include <vector>
using  namespace std;

int fuckingPrime(int n){
vector<int> v;
int cnt=0;
for(int i=2;i<8000;i++){
	for(int j=2;j<8000;j++){
		if(i%j==0){
			cnt++;
		}
	}
	if(cnt==1){
		v.push_back(i);
		cnt=0;
	}
	else {
		cnt=0;
	}
}
return v[n-1];
}

int main ( ) {
	int n;
	cin>>n;
	cout<<fuckingPrime(n);
	return 0; 
}