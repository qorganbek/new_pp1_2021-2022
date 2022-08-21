#include <bits/stdc++.h>
using namespace std;
#define m_it map<string,int>::iterator 
int main () {
	map<string,int> mm;
	int n;
	cin>>n;
	for(int i=0;i < n;i++){
		string x;
		int r;
		cin>>x>>r;
		mm[x]=r;
	}
	m_it iter;
	for(iter=mm.first;iter!=mm.second;iter++){
		cout<<(*iter).first<< " " <<(*iter).second<<endl;
	}
	return 0;
}