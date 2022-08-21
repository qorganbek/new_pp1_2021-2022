#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main ( ){
	int n;
	cin>>n;
	vector<int> v;
	set<int> s;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.insert(a);
		v.push_back(a);
	}
	if(s.size()==v.size()){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}

	return 0;
}