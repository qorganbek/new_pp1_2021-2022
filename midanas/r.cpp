#include <bits/stdc++.h>
using namespace std;
int main () {
	string s,t="";
	getline(cin,s);
	map<string,int> m;
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			t+=s[i];
		}
		else{
			m[t]++;
			t="";
		}
	}
	m[t]++;
	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	} 
	return 0;
}