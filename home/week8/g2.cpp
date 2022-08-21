#include <iostream>
#include <vector>
using namespace std;
int isPrime(int n,vector<int> v,int k){
	int cnt=0,cd=0;
	for(int i=0;i<v.size();i++){
		for(int j=1;j<1001;j++){
			if(v[i]%j==0 && k<=v[i]){
				cnt++;
			}
			if(cnt==2){
				cnt=0;
				cd++;
			}
		}
	}
	return cd;
}
	int main (){
		int n,x,k;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		cin>>k;
		cout<<isPrime(n,v,k);
		return 0;
	}
