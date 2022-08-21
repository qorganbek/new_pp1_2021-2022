#include <iostream>
using namespace std;
int main () {
	int n;cin>>n;
	int a[n][n];
	int max=0; 
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
	cin>>a[i][j];
	if (max<a[i][j]) 
     max=a[i][j]; 
     } 
}
cout << max;
}