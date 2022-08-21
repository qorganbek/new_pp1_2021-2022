#include <iostream>
#define 
using namespace std;
int main () {
	int a[10]={9,2,3,1,5,6,4,7,8,0};
	for(int i=0;i<10-1;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0; 
}