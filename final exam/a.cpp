#include <bits/stdc++.h>
using namespace std;
int main  () {
	int a[7]={1,2,5,10,20,50,100};
	for(int i=0;i<7;i++){
		int x;
		cin>>x;
		a[i]*=x;
	}
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int sum=0;
	for(int i=0;i<7;i++){
		sum+=a[i];
	}
	for(int i=0;i<n;i++){
		if(sum>v[i]){
			sum-=v[i];
			cout<<"Transaction accepted!"<<endl;
		}
		else {
			cout<<"Transaction stopped!"<<endl;
		}
	}
	return 0;
}