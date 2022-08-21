#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int> v;
	int cnt=0;
	for(int i=2;i<1000;i++){
		for(int j=2;j<1000;j++){
			if(i%j==0){
				cnt++;
			}
		}
		if(cnt==1){
			v.push_back(i);
			cnt=0;
		}
		else {
			cnt=0;
		}
	}
		cout<<v[n];
	return 0;
}