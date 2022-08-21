#include <iostream>
#include <vector>

int mk(int k){
	int max=0;
	if(k>max){
		max=k;
	}
	return max;
}


using namespace std;
int main (){
	int n,m;
	int k=0;
	int maxm=0;
	cin>>n>>m;
	string nn[n];
	string o;
	int mm[m];
	vector<int> v;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>nn[i]>>mm[j];
			int k=+mm[j];
			if(mk(k)>maxm){
				o=nn[i];
				maxm=k;
			}
			v.push_back(k);
		}
	}
	// for(int i=0;i<v.size();i++){
	// 	if(v[i]>max){
	// 		max=v[i];
	// 	}
	// }
	for(int i=0;i<n;i++){
		cout<<nn[i]<<" - "<<v[i]<<endl;
	}
	cout<<"The best:"<<endl;
	cout<<o<<" "<<k;
	return 0;
}