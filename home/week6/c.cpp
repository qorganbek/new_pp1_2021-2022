#include <iostream>
using namespace std;
int arr(int n,int a[],b[]){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				cnt++;
			}
		}
	}
	return cnt;
}

int main (){
int n;cin>>n;
int cnt=0;
int a[n],b[n];
for(int i=0;i<n;i++){
cin>>a[i];	
}
  for(int i=0;i<n;i++){
cin>>b[i];	
}
cout<<arr(n,a,b);
}