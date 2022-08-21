#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	//string s;
	//getline (cin,s) ;
	//reverse(s.begin(),s.end());
	//sort (s.begin(),s.end()) ;
	//cout<<s<<" ";
	int a[5]={1,9,5,6,7} ;
	sort(a,a+5) ;
	for(int i=0;i<5;i++){
	cout<<a[i]<<" ";
}
	return 0;
}