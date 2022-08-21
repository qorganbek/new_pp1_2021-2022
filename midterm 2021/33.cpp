#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, sum, row = 0;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	cin >> k;
	int min = abs(a[0]-k);
	for(int i=1; i<n; i++){
		sum = 0;
		sum = abs(a[i]-k);
		if(min>sum){
			min = sum;
			row = i;
		}
	}	cout << row;
}
