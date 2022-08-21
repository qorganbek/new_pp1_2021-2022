#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector <int> v;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		map <int,int> mp1;
		map <int,int> mp2;
		for(int i=0; i<x; i++){
			int y;
			cin >> y;
			mp1[y]++;
			mp2[y] = i+1;
		}	bool ok = false;
		for(auto it : mp1){
			if(it.second==1){
				v.push_back(mp2[it.first]);
				ok = true;
				break;
			}
		}	if(!ok)
				v.push_back(0);	
	}

	for(int i=0; i<v.size(); i++){
		if(v[i]==0){
			cout << "ZA WARUDO";
		}	else{
			cout << v[i] << endl;
		}
	}
}