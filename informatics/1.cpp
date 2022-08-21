#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	string s ="";
	s+=to_string (n);
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}