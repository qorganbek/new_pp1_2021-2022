#include <bits/stdc++.h>
using namespace std;

bool check(char a[n][m],int n,int m){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			if(a[i+1][j]=='.' or a[i][j+1]==' '){
				cnt++;
			}
		}
	}
	if(cnt==m){
		return 1;
	}
	return 0;
}

int main () {
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	return 0;
}