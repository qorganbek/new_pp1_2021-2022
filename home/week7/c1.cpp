#include <iostream>
using namespace std;

bool search(int n,int a[],int x,int y){
if(n==y) return 0;
if(a[y]==x) return 1;
search(n,a,x,y+1);
}

int main (){
//input
	int n;cin>>n;
	int a[n];
	for(int y=0;y<n;y++){
		cin>>a[y];
	}
	int x;
	cin>>x;
	//solving
    for(int y=0;y<n;y++){
    	if(search(n,a,x,y)){
    		cout<<"Yes";
    		return 0;
    	}
    	else {
    		cout<<"No";
    		return 0;
    	}
    }

	return 0;
}