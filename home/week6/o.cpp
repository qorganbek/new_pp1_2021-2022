#include <iostream>
using namespace std;
int sum(int n){
int sum=0;
while(n>0){
	sum=sum + n %10;
	n=n/10;
	return sum; 
}
}

int main (){
int n;
cin>>n;
if(sum){
	cout<<"yes";
}
else {
	cout<<"no";
}
}