#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	char a[n][n];
	if(n%2==1){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j>=n-1){
				a[i][j]='#';
			}
			else{
				a[i][j]='.';
			}
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
else {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				a[i][j]=='#';
			}
			if(i-j<0){
				a[i][j]='.';
			}
			else {
				a[i][j]='#';
			}
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

	
	return 0;
}