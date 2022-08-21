#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	vector <int> vr(v);
	reverse(vr.begin(),vr.end());
	for(int i=0;i<n;i++){
		if(v[i]==vr[i]){
			cout<<"OK"<<endl;
		}
		else{ 
			cout<<"Instead of "<<v[i]<<" here was "<<vr[i]<<endl;
		}
	}
	return 0;
}