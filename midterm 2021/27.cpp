#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n, x;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	    cin >> x;
	    for(int i=0; i<n; i++){
		cout << a[(i-x+n)%n] << " ";
	}
}