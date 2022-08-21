#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int a[26];
	for(int i=0;i<26;i++){
		a[i]=0;
	}
	for(int i=0;i<s.size();i++){
	    int index=(int)s[i]-97;
	    a[index]++;
	}
	for(int i=0;i<26;i++){
      if(a[i]==2){
      	cout<<char(i+97);
      }
	}
	return 0;
}