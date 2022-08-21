#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int max=-1e9;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max){;
			max=a[i][j];
		}
		}
			
		}
		int i=0,j=0;
		for(i=0;i<n;i++){
		   for(j=0;j<n;j++){
			if(a[i][j]=max){

			 cout<<i<<" "<<j<<endl;
		   }
		  	
		    }
 
	     }
	    
return 0;
}