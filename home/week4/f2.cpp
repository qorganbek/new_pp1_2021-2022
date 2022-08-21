#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n][n];
	int posi=100,posj=1000;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int max=-1e9;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max){;
			max=a[i][j]; //a[2][]
			posi=i+1;posj=j+1;

	}
		}
			
		}
		

	cout<<posi<<" "<<posj;    
return 0;
}