#include <iostream>
using namespace std;
int modadd(int a,int b,int x){
	a=a+b;
	return a%x;
}
int main (){
int a,b,x;
cin>>a>>b>>x;
cout<<modadd(a,b,x);
  
}