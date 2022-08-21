#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n,x,a,b;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++){
		cin>>x;
		v1.push_back(x);
	}
	cin>>a>>b;
    vector<int> v2(v1.begin()+a,v1.end());
    v1.erase(v1.begin()+a,v1.end());
    v1.push_back(b);
    for(int i=0;i<v1.size();i++){
    	cout<<v1[i]<<" ";
    }
    for(int i=0;i<v2.size();i++){
    	cout<<v2[i]<<" ";
    }
	return 0;
}