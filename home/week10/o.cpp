#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	string st="";
	for(int i=0;i<n;i++){
		while(v[i]!=0){
			st+=to_string(v[i]%2);
			v[i]/=2;
		}
		reverse(st.begin(),st.end());
		cout<<st<<endl;
		st="";
	}
	return 0;
}