#include <iostream>
#include <cmath>
using namespace std;

void dev(int n,int index){
    if(pow(2,index)==n){
    	cout<<"Yes";
    	return;
    }
    else if(pow(2,index)!=n){
    	cout<<"No";
    	return;
    }
    dev(n,index+1);
}
int main (){
	int n;
	cin>>n;
	dev(n,0);
	return 0;
}