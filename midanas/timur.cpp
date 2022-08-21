#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	int p;
	int i=0;
  while(p<b){
   p=pow(a,i);
   i++;
  }
   if(p==b){
    cout<<i-1;
   }
   else cout<<"no";
}