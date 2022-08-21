#include <iostream>
using namespace std;
int main (){
int n;cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
int x;
x=n;
while(x!=0){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(j-i==x) cout<<a[i][j]<<" ";
	}
	
}
cout<<endl;
x--;
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(j==i) cout<<a[i][j]<<" ";
	}
}
cout<<endl;
x=n;
while(x!=0){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i-j==n-x) cout<<a[i][j]<<" ";
	}
	
}
cout<<endl;
x--;
}

}
