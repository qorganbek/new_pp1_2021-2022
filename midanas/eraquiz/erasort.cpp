#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
        if(i%2==0){
        sort(a[i][j],a[i][j+m]);
	}
	else if(i%2==1){
     sort(a[i][j],a[i][j+m]);
     reverse(a[i][j],a[i][j+m]);
	}
}
}
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j];
		}
	}
 return 0; 

}