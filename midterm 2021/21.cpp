#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
int n, a, d, sum=0;
cin >> n >> a >> d;
int aa[n];
aa[0] = a;
for(int i=0; i<n-1; i++){
	
	aa[i+1] = a+d;
	a += d;
} for(int i=0; i<n; i++){
	sum+= aa[i];
} for(int i=0; i<n; i++){
	cout << aa[i] << " ";
}   cout << endl;
	cout << "sum: " << sum;
}