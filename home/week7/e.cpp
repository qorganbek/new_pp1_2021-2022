#include <iostream>
#include <cmath>
using namespace std;

bool pow2(int n,int index){
	if(pow(2,index)==n) return 1;
	if(index>=n) return 0;
    pow2(n,index+1);
         }


int main (){
int n;
cin>>n;
  if(pow2(n,0)){
  	cout<<"Yes";
  }
  else cout<<"No";
	return 0;
}