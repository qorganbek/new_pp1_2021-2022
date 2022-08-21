#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int alpcnt[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ;
	for(int i=0;i<26;i++){
      int index = (int)s[i]-'a' ;
      alpcnt[index]++;
       for(int i=0;i<26;i++){
       	if(alpcnt[i]=1){
       		cout<<"Yes"<<" "; 
       	}
         
           else cout<<"No";       
	 }
}
//for (int i=0;i<26;i++){
		//cout << alpcnt[i]<<" ";
	//}
	return 0;
}