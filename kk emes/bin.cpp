#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n,t;
	string an="";
	cin>>n;
	while(n>0){
     t=n%2;
     n/=2;
     an+=char(t+'0');
	}
	reverse(an.begin(),an.end());
	cout<<an;
	return 0;
}