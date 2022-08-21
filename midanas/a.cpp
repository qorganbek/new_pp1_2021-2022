#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n,m;
	int cnt=0;
	vector<int> v;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
     while(i!=0){
     	v.push_back(i%10);
     	i/=10;
     }
     vector<int> v1(10,0);
     for(int j=0;j<v.size();j++){
     	v1[v[j]]++;
     }
     for(int j=0;j<v1.size();j++){
     	if(v1[j]==1){
     		cnt++;
     		if(cnt==v1.size()){
     			cout<<i;
     			
     		}
     	}
     }
 }
	return 0; 
}