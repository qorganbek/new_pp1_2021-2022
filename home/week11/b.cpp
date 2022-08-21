#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int> v;
	set <int> s;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
		s.insert(x);
	}
	sort(v.begin(),v.end());
	if(s.size()==v.size()){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}