#include <iostream>
#include <cmath>
using namespace std;

bool ispowerfull(int n,int a[]){
     int k=a[0];
     for(int i=1;i<n;i++){
     	k^=a[i];
     }
     int cnt=0;
		for(int j=0;j<=k;j++){
			if(pow(2,j)==k){
				cnt++;
			}
		}
	
	if(cnt>=1){
		return 1;
	}
	else return 0;
}



int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(ispowerfull(n,a)){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}