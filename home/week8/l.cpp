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
	cout<<a.size();
	return 0;
}