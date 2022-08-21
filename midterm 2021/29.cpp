#include <iostream>
using namespace std;
int main (){
	int n;
    cin>>n;
    if(n<5){
    	cout<<"no";
    }
     int a[n];
     for(int i=0;i<n;i++){
      if(i==0){
      	a[i]=2;
      }
      else if(i>=1){

      	a[i]=a[i-1]+3;
      }
      cout<<a[i]<<" ";

     }
	return 0;
}