#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	string s;
	char a[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			a[i][j]='0';
		}
	}
	for(int i=0;i<n;i++){
		cin>>s;
	  a[s[0]-65][s[1]-'0']='*';
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}