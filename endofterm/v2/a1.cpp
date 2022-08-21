#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> v;
	int cnt=0;
	int k;cin>>k;
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		for(int j=0;j<n;j++){
			if(x==a[j]){
				cnt++;
			}
		}
		v.push_back(cnt);
		cnt=0;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}