#include <iostream>
#include <vector>
using namespace std;
int main ( ) {
	vector<int> v;
	string s,ss;
	cin>>s>>ss;
	
		if(s.find(ss)!=string::npos){
			int k=s.find(ss);
			v.push_back(k);
			for(int j=0;j<ss.size();j++){
				ss[j]='.';
			}
		}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}