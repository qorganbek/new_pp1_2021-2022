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
	set<int>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		if(*it%2==1){
			cout<<*it<<" ";
		}
	}
	return 0;
}