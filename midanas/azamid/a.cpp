#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	string t="abcdefghijklmnopqrstuvwxyz";
	if(s==t){
		cout<<"yes";
	}
	else cout<<"no";

}