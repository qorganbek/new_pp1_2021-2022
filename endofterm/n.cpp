#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	cin>>s;
	char a[s.size()];
	for(int i=0;i<s.size();i++){
		a[i]=s[i];
	}
	sort(a,a+s.size());
	do{
		for(int i=0;i<s.size();i++){
			cout<<a[i];;
		}
		cout<<endl;
	} while(next_permutation(a,a+s.size()));
	return 0;
}