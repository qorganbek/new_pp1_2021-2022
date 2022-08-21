#include <iostream>
using namespace std;
int main (){
    string s;
    cin>>s;
    int digcnt[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<s.size();i++){
    	int index=(int)s[i]-'0';
    	digcnt[index]++;
    } 
    for(int i=0;i<10;i++){
    	if(digcnt[i]>=1)
    	cout<<i<< ": "<<digcnt[i]<<endl;
    }
	return 0;
}