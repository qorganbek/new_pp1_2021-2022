#include <iostream>
using namespace std;
string search(int n,int a[],int x,int index){
	if(a[index]==x){
		return "Yes";
	}
	if(index==n-1){
		return "No";
	}
	if(a[index]!=x){
		return search(n,a,x,index+1);
	}
}
int main (){
	//input
    int n,x,y=0;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    cin>>x;
    //output
    cout<<search(n,a,x,y);
	return 0;
}