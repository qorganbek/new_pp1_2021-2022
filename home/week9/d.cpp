#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n,k,x;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int cnt=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==k){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}