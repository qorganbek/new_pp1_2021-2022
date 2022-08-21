#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	string nn[n];
	int mm[n];
	for(int i=0;i<n;i++){
		cin>>nn[i];
		cin>>mm[i];
	}
	sort(nn,nn+n);
	sort(mm,mm+n);
	for(int i=0;i<n;i++){
		cout<<nn[i]<<" "<<mm[i]<<endl;
	}
	return 0;
}