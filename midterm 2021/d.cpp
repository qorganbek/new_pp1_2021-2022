#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	string s;
	string ss="@gmail.com";
	while(n!=0){
		cin>>s;
	}
    s.erase(s.find(ss),10);
    cout<<s;
	return 0;
}