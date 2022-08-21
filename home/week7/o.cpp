#include <iostream>
using namespace std;
void kinary(int n,int k){
     if(n==0){
     	return;
     }
     kinary(n/k,k);
         cout<<n%k;
}
int main (){
int n,k;
cin>>n>>k;
kinary(n,k);
	return 0;
}