#include <iostream>
using namespace std;
int main () {
	int n;cin>>n;
	int a[n];
	for (int i=0;n>i;i++){
		cin >> a[i];
	}
	int b=-1e9;
	for (int i=0;n>i;i++){
		if (a[i]>b){
			cout << " " << a[i];
		}
	}

}