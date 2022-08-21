#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
	int n,x;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int k;
	cin>>k;
	vector<int>::iterator it;
	it=find(v.begin(),v.end(),k);
	if(it!=v.end()){
		cout<<"Yes";
	}
	else cout<<"No";
	return 0;
}