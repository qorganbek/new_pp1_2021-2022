#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int n,x,k;
    cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++){
    	cin>>x;
         v.push_back(x);
    }
    cin>>k;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
    	if(k>0){
         cout<<v[i]<<" ";
         k--;
    	}
    }
	return 0;
}