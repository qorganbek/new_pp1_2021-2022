#include <iostream>
#include <vector>
using namespace std;
int main (){
	int n,x,k;
	cin>>n;
	vector<int> v;
    for(int i=0;i<n;i++){
    	cin>>x;
    	v.push_back(x);
    }
    cin>>k;
    int cnt=0,cd=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<1001;j++){
            if(v[i]%j==0 && v[i]>k){
                cnt++;
            }
            if(cnt==2){
              cd++;
              cnt=0;
            }
        }
    }
    cout<<cd;
	return 0;
}