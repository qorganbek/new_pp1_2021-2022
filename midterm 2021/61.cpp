#include <bits/stdc++.h>
using namespace std;
int main () {
	double n,max=0;
	string x="";
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		double p,q;
		cin>>s>>p>>q;
		if(max<q/p){
			max=q/p;
			x=s;
		}
	}
	cout<<x;
	return 0;
}