#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	vector<pair < int , int> > v;
	cin>>n;
	int cnt=0;
		for(int i=0;i<n;i++){
			int a,b;
		    cin>>a>>b;
		for(int i=0;i<v.size();i++){
			int it=v[i].first;
			int it2=v[i].second;
			if(( it == b and it2 == a) or (it == a and it2 == b)){
				cnt++;
				cout<<cnt<<endl;
			}
			v.push_back(make_pair(a,b));
		}
	}
	return 0;
}