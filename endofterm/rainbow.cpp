#include <bits/stdc++.h>
using namespace std;

string rain[7]={"red","orange","yellow","green","blue","indigo","purple"};


bool cmp(pair <string , int > a,pair <string ,int> b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	return a.first<b.first;
}




void changer(vector< pair < string , int> > v) {
	for(int i=0;i<7;i++){
		for(int j=0;j<v.size();j++){
			if(rain[i]==v[j].first){
				v[j].first[0]='a'+i;
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
}

void changer2(vector< pair < string , int> > v) {
	for(int i=0;i<7;i++){
		for(int j=0;j<v.size();j++){
			if('a'+i==v[j].first[0]){
				rain[i]=v[j].first;
			}
		}
	}
			for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}

}



int main () {
	int n;
	cin>>n;
	multimap<string,int> m;
	for(int i=0;i<n;i++){
		int x;
		string s;
		cin>>s>>x;
		m.insert(make_pair(s,x));
	}
	vector < pair < string , int> > v(m.begin(),m.end());
	changer(v);
	return 0;
}