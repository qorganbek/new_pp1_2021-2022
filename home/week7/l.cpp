#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s,int k){
  string st="";
  if(k>=0){
  	st+=s[k];
   palindrome(s,k-1);
    }
   if(s==st) return 1;
    else  return 0;  
    
    

   
}


int main (){
	string s;
	cin>>s;
	int k=s.size()-1;
  if(palindrome(s,k)){
  	cout<<"Yes";
  }
  else cout<<"No";
	return 0;
}