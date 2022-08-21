#include <bits/stdc++.h>
using namespace std;
int main () {
	string n;
	cin>>n;
	reverse(n.begin(),n.end());
	int total=0;
	for(int i=0;i<n.size();i++){
		total=total+(pow(2,i)*n[i]-'0');
	}
	cout<<total;
	return 0;
}