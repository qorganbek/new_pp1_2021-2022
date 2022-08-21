#include <iostream>
using namespace std;
int main (){
	int x;
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	cin>>x;
	int p;
	while(x!=0){
       p=x%2;
		a[p]++;
		x=x/2;
	}
cout<<a[0];
	return 0;
}