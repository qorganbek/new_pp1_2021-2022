// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;
// int main () {
// 	int x,y;
// 	cin>>x>>y;
// 	int n;
// 	cin>>n;
// 	pair <double , pair < int , int > > a[2000];
// 	for(int i=0;i<n;i++){
// 		int c,d;
// 		cin>>c>>d;
// 		a[i]=make_pair(0,make_pair(c,d));
// 	}
// 	for(int i=0;i<n;i++){
// 		a[i].first=sqrt(pow((a[i].second.first-x),2)+pow((a[i].second.second-y),2));
// 	}
// 	sort(a,a+n);
// 	for(int i=0;i<n;i++){
// 		cout<<a[i].second.first<<" "<<a[i].second.second<<endl;
// 	}

// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int dis(int x, int y, int x2, int y2){
    return (x - x2)*(x - x2) + (y - y2)*(y - y2);
}

int main(){
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<pair<int, pair<int,int>>> v;
    for(int i = 0; i < n; i++){
        int z1, z2;
        cin >> z1 >> z2;
        int d = dis(x, y, z1, z2);
        v.push_back({d,{z1, z2}});
    }
    sort(v.begin(), v.end());
    for(auto x: v){
        cout << x.second.first << " " << x.second.second << endl;
    }
}