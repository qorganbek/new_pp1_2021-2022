#include <iostream>
using namespace std;

string pal(string s,int basy ,int aiagy){
if(basy>=aiagy){
	return "Yes";
}
if(s[basy]==s[aiagy]){
   return pal(s,basy+1,aiagy-1);
}
return "No";
}

int main (){
	string s;
	cin>>s;
	cout<<pal(s,0,s.size()-1);
	return 0;
}