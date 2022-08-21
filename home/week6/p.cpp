#include <iostream>
#include <cmath>
using namespace std;

 int pos_num(int n){
 	n=abs(n);
 	return n;
 }

int main (){
int n;
cin>>n;
cout<<pos_num(n);
}