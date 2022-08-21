#include <iostream>
using namespace std;
int infinity(int a){
   int n;
   cin>>n;
   if(n!=0){
   	a+=n;
   	return infinity(a);
   }
   else {
   	return a;
   }
}
int main (){
	int a=0;
    cout<<infinity(a);
	return 0;
}