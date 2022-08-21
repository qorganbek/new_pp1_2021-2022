#include <iostream>
using namespace std;
bool valid(string s,int n){
	int cnt=0;
    for(int i=0;i<s.size();i++){
     if(s[i]>='0' && s[i]<='9')
      {
      cnt++;
      }
  }
      if(cnt>=n)
      {
      	return true;
      } 	
      else 
      {
      	return false;
      }

}

int main (){
	string s;
	cin>>s;
	int n;
	cin>>n;
	if(valid(s,n)){
		cout<<"yes";
	}
	else {
		cout<<"no";
     }
 }

