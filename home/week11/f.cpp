#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v;
	for(int i=1;i<m+n;i++){
		if(m%i==0 and n%i==0){
			v.push_back(i);
		}
	}
	cout<<v[v.size()-k];
	return 0;
}