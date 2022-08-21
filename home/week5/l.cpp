#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s;
	cin>>s;
	string t=s;
	sort(t.begin(),t.end());
    if(s==t){
    	cout<<"YES";
    }
    else cout<<"NO";

	return 0;
}