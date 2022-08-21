#include <iostream>
#include <cmath>
using namespace std;
  void rec(int n){
  	long long k=pow(2,n);
    	cout<<k;
  }
    

   
int main (){
	int n;
	cin>>n;
	rec(n);
	return 0;
}