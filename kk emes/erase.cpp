#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s;
	getline (cin,s);
	int n,m;
	cin>>n>>m;
	s.erase(n,m);
	cout<<s;
}