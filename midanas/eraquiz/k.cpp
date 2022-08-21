#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int a[5]={8,7,6,4,1} ;
	sort(a,a+5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}