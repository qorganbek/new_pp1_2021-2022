#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int p=s.size();
	char a[3][p+2];
	a[1][p+1]='+';
	a[1][0]='+';
	for(int i=0;i<1;i++){
		for(int j=0;j<p+2;j++){
			a[i][j]='+';
		}
	}
	for(int i=2;i<3;i++){
		for(int j=0;j<p+2;j++){
	       a[i][j]='+';		
		}
	}
	
	for(int i=1;i<2;i++){
		for(int j=1;j<p+1;j++){
	       	for(int k=p-1;k>=0;k--){
	     swap(s[k],a[i][j]);
	       	}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<p+2;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}


}