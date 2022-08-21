#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main () {
	int n;
	double total = 0;
	cin>>n;
    map <string , double > mp;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		for(int j=0;j<m;j++){
			string s;
			double x;
			cin>>s>>x;
			mp[s]+=x;
			total+=x;
		}
	}
	for(auto it=mp.begin();it!=mp.end();it++){
		(*it).second=(*it).second/total*100;
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
}