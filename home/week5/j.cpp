#include <iostream>
using namespace std;
int main (){
    string s,t="";
    cin>>s;
    string st=s+s[0];
    for(int i=st.size()-1;i>=0;i--){
    	t=t+st[i];
    }
    if(st==t){
    	cout<<"Yes"<<endl;
    }
    else cout<<"No";
	return 0;
}