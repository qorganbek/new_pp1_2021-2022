#include <iostream>
#include <vector>
#include <algorithm>
vector<int> v;
vector<int> vk;
void fuckingprime(int n){
	int cnt=0;
	for(int i=2;i<n;i++){
		for(int j=2;j<n;j++){
			if(i%j==0){
				cnt++;
			}
		}
		if(cnt==1){
			v.push_back(i);
			cnt=0;
		}
		else {
			cnt=0;
		}
	}
	for(int i=0;i<v.size();i++){
		if(n%i==0){
			vk.push_back(i);
		}
	}
	for(int i=0;i<vk.size();i++){
		for(int j=0;j<n;j++){
			int k=v[i];
			while(k=n){
				k=v[i];
				
			}
		}
	}

}


using namespace std;
int main () {
	int n;
	cin>>n;
	fuckingprime(n);
	return 0;
}