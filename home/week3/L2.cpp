#include <iostream>
using namespace std;
int main (){
	
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;cin>>m;
	int b[m];
	int c[n+m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
      c[i]=a[i];
	}
		for(int i=0;i<m;i++){
      c[i+n]=b[i];
	}

  for(int i=0;i<n+m;i++){//0
  	for(int j=0;j<n+m-i-1;j++){//
  		if(c[j]>c[j+1]){
  			swap(c[j],c[j+1]) ;

  		}
  	}
  }
	for(int i=0;i<n+m;i++){
	cout <<c[i]<<" ";
	}
}