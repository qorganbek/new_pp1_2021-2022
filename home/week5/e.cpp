#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int cntodd=0,cnteven=0;
	for(int i=0;i<s.size();i++){
       if(i%2==0){
       	cnteven=cnteven + s[i]-48;
       }
       else if(i%2==1){
       	cntodd=cntodd+s[i]-48;
       }
  }
       if(cntodd==cnteven){
            cout<<"YES"<<endl;
       }
       else cout<<"NO";
	

}