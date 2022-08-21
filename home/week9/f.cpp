#include <iostream>
#include <stack>
using namespace std;
string s;
stack <char> st;
int main (){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(st.size()==0){
				cout<<"NO";
				return 0;
			}
			st.pop();
		}
	}
		
	if(st.size()==0){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}