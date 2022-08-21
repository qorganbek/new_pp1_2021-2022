#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	int digcnt[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<1001;i++){
		digcnt[i]=0;
	}
	for(int i=0;i<n;i++){
      int index=a[i];
      digcnt[index]++;
	}
	int max=0;
	for(int i=0;i<1001;i++){
		if(digcnt[i]>max){
			max=digcnt[i];
	}
}
int jk;
    for(int i=0;i<1001;i++){
    if(max==digcnt[i]){
        jk=i;
          } 
      }
      cout<<jk<<" ";
	return 0;
}