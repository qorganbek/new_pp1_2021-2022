#include <iostream>
#include <set>
using namespace std;
int main (){
	int n,x;
	cin>>n;
	set<int> a;
	for(int i=0;i<n;i++){
		cin>>x;
		a.insert(x);
	}
	int sum=0;
	set<int>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		sum+= *it;
	}
	cout<<sum;
	return 0;
}