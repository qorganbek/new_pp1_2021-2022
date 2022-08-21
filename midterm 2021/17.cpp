#include <bits/stdc++.h>
using namespace std;
int main(){
  /* int n;
   cin >> n;
   int a[n], temp=0;
   for(int i=0; i<n ;i++){
   	cin >> a[i];
   } 

   for(int j=0; j<n; j++){
   	for(int i=0; i<n-1; i++){
   		if(a[i]>a[i+1]){
   			temp = a[i];
   			a[i] = a[i+1];
   			a[i+1] = temp;
   		}
   	}
   }  for(int i=0; i<n; i++){
   	cout << a[i] << " ";
   }*/


	int n,m,b;
	cin >> n >> m >> b;
	double res = (n+m)/10;
	if(res < b){
		cout << "Boris, you are punished!";
	} else{
		cout << "You are my sweet baby";
	}
}