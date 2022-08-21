#include <iostream>
#include <vector>
using namespace std;
vector<string> v;

bool palindrom(string s){
	string ss="";
	for(int i=s.size()-1;i>=0;i--){
			ss+=s[i];
		}
			if(s==ss){
				return 1;
			}
			else 
				{
					return 0;
				}
}

int main (){
	int n;
	cin>>n;
	string s;
	while(n!=0){
		cin>>s;
		if(palindrom(s)){
			v.push_back(s);
		}
		n--;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	if(v.size()==0){
		cout<<"NO";
	}

	return 0;
}