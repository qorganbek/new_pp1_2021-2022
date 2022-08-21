#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s;
	cin>>s;
	int digcnt[10]={0,0,0,0,0,0,0,0,0,0};
	sort(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
     int index=(int)s[i]-'0';
     digcnt[index]++;
	}
	for(int i=0;i<=10;i++){
      if(digcnt[i]==digcnt[i+1]){//112233
      	cout<<"YES";
      }
      else cout<<"NO";
	}


	return 0;
}