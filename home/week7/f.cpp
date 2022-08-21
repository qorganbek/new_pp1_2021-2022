#include <iostream>
using namespace std;
void even(string s,int cnt,int index){
	if (index==s.size()){
	cout<<cnt; 
		return;
	}
  if(s[index]%2==0){
  	cnt++;
  	even(s,cnt,index+1);
  	return;
  }
  even(s,cnt,index+1);
}

using namespace std;
int main (){
	string s;
	cin>>s;
	even(s,0,0);
	return 0;
}