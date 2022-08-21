#include <iostream>
using namespace std;
 long long sum(string s,int index){
    if(index==s.size()-1){
    	return s[index]-'0';
    }
    return s[index]-'0'+sum(s,index+1);
 }
int main (){
	string s;
	cin>>s;
	cout<<sum(s,0);
	return 0;
}