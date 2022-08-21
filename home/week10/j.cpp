#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ( ) {
	int n,m;cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	reverse(v.begin(),v.begin()+m);
	reverse(v.begin()+m,v.end());
	rotate(v.begin()+m,v.begin()+m,v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
//     1 2 3 4 5