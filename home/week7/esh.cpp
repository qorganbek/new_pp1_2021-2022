#include<bits/stdc++.h>
#include <cmath>

using namespace std;

string fun(int num){
 
 if(num==1 && num<2e63){
 	return "Yes";

 }
  
 if(num%2!=0 && num<2e63){
 	return "No";

 }
 if(num==2 && num<2e63){
 	return "Yes";

 }
 return fun(num/2);




}


int main(){
	int num;
	cin>>num;

	cout<<fun(num);
}