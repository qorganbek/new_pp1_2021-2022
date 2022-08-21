#include <iostream>
using namespace std;

void rec(int n,int index){
	if(n==index-1){
	return;
}
if(n!=0){
	cout<<index<<" ";
	rec(n,index+1);
}

}

int main (){
	int n;
	cin>>n;
	rec(n,1);
	return 0;
}