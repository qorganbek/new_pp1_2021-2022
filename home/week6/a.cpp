#include <iostream>
using namespace std;
int func(int a,int b){
	return a+b;
}
int main (){
	int x,y;cin>>x>>y;
	cout<<func(x,y);
	return 0;
}