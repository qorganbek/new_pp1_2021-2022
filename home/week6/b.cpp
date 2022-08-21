#include <iostream>
#include <cmath>
using namespace std;
void arr(int n,int a[],int b[]){
	for(int i=0;i<n;i++){
		cout<<abs(a[i]-b[i])<<" "; 
	}
}

int main(){
 int n;cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	arr(n,a,b);
   return 0;
}