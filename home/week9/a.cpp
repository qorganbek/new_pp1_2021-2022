#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n;
	cin>>n;
	int x,y;
	pair<int ,int> xy[2001];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		xy[i]=make_pair(x,y);
		//cin>>xy[i].first<<xy[i].second;
	}
	sort(xy,xy+n);
	for(int i=0;i<n;i++){
		cout<<xy[i].first<<" "<<xy[i].second<<endl;
	}
}