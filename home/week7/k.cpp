#include <iostream>

using namespace std;

void maximum(string s , int index, char max){
     if(max<s[index]){
     	max=s[index];

     }
     if(index==s.size()-1){
     	cout<<max;
     	return;

     }
    maximum(s,index+1,max);
 
}

int main (){
	string s;
	cin>>s;
     char max=s[0];
     maximum(s,0,max);
	return 0;
}