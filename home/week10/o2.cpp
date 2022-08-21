#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void bin(int i){
	string j="";
	while(i!=0){
		j+=to_string(i%2);
		i/=2;
	}
	reverse(j.begin(),j.end());
	cout<<j<<endl;
}

int main ( ) {
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		v.push_back(c);
	}
	for_each(v.begin(),v.end(),bin);
	return 0;
}