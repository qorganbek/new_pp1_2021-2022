#include <iostream>
#include <map>
using namespace std;
int main () {
	int n;
	cin>>n;
	string s,ss;
	int x,xx;
	map < pair < pair < string , int > , pair < string, int > > , int > m;
	for(int i=0;i<n;i++){
		cin>>s>>x>>ss>>xx;
		m[make_pair(make_pair(s,x),make_pair(ss,xx))]=x+xx;
	} 
	for(auto it =m.begin();it!=m.end();it++){
		cout<<(*it).first.first.first<<" and "<<(*it).first.second.first<<" "<<(*it).second<<endl;
	}
	return 0;
}