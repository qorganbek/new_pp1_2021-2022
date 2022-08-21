#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n,x;
    cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++){
    	cin>>x;
    	v.push_back(x);
    }
    int k,sum=0;
    cin>>k;
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
    	if(k>0){
    		sum+=v[i];
    		k--;
    	}
    }
    cout<<sum;
	return 0;
}