#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s;
	cin>>s;
	int l,r;cin>>l>>r;
	string str=s.substr(l,r+1) ;
	cout<<str;
	return 0;
}
