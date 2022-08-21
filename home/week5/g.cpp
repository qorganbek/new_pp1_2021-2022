#include <iostream>
using namespace std;
int main (){
	string s,t;
	cin>>s>>t;
	int sum_s=0;
	int sum_t=0;
	for(int i=0;i<s.size();i++){
        sum_s=sum_s + (int)s[i] ;
	}
	for(int i=0;i<t.size();i++){
		sum_t=sum_t+(int)t[i] ;
	}
	if(sum_t==sum_s){
		cout<<"YES";
	}
	else cout<<"NO" ;

}