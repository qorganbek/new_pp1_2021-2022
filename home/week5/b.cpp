#include <iostream>
using namespace std;
int main (){
string s;cin>>s;
for (int i=0;i<s.size();i++){
	if (96 <s[i] && s[i]<123){
		s[i]=char((int)s[i]-32);
	}

}
cout<<s;
	return 0;
}