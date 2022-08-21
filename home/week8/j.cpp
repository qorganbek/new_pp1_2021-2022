#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n,x;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int max=0;
	int min=1001;
     for(int i=0;i<v.size();i++){
         if(max<v[i]){
         	max=v[i];
         }
     }
     for(int i=0;i<v.size();i++){
         if(min>v[i]){
         	min=v[i];
         }
     }
     cout<<max-min;

	return 0;
}