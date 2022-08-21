#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b){
	return a.second>b.second;
}

int main(){
	map <string,int> m;
	string s, t = "";
	getline(cin,s);
	double cnt=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]>=65 && s[i]<=90){
			s[i] = s[i] + 32;
		}
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]==' '){
			m[t]++;
			m.emplace(t, m[t]);
			cnt++;
			t = "";
		}	else{
			t += s[i];
		}	if(i==s.size()-1){
			m[t]++;
			m.emplace(t, m[t]);
			cnt++;
		}
	}
	vector <pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		cout << it.first << " : " << it.second*100/cnt << '%' << endl;
	}
}