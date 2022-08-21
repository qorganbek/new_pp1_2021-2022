// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// int i=0;

// long long genPow(){
// 	long long y=pow(i,i);
// 	i++;
// 	return y;
//   }

// int main () {
// 	int n;
// 	cin>>n;
// 	vector<long long > v(n+1);
// 	generate(v.begin(),v.end(),genPow);
// 	for(int j=0;j<v.size();j++){
// 		cout<<v[j]<<" ";
// 	}
// 	cout<<endl;
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;


long long f(){
    static long long x = -1;
    x++;
    long long s = 1;
    for(int i = 0; i < x; i++){
        s *= x;
    }
    return s;
}

int main(){
    int n; cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), f);
    for(int i = 0; i < n + 1; i++){
        cout << v[i] << " ";
    }
}