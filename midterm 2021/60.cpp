#include <iostream>
using namespace std;

bool IsPerfectNumber(int n){
	if(n%3==0){
		return 1;
	}
	else return 0;
}

int main (){
int n;
int cnt=0;
while(cin>>n){
	if(IsPerfectNumber(n)){
		cnt++;
	}
	else
	{
		cout<<cnt;
		return 0;
	} 
}
}