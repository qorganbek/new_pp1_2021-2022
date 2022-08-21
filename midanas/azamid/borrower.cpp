#include <iostream>
using namespace std;
int main (){
	int friends;
	cin>>friends;
	int yourmoney;
	cin>>yourmoney;
	int qaryz;
	cin>>qaryz;
	
	int a[friends];
	for(int i=0;i<friends;i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=0;i<friends;i++){
		if(qaryz-yourmoney>=a[i]){
            cnt++;
		}
	}
	cout<<cnt;
}