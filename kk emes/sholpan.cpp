#include <iostream>
using namespace std;
int main (){
	int cnt=0;
	int n,m;
	cin>>n>>m;
	for(int i=100;i<901;i++){
		if(i%n==0 and i % m==0){
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<endl;
	cout<<cnt;
	return 0;
}