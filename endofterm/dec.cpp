#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	cin>>s;
	int total=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			total+=pow(2,s.size()-i-1);
		}
	}
	cout<<total;
	return 0;
}