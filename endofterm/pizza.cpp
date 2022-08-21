#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	stack<string> st;
	while(cin>>s){
		string x;
		if(s == "new"){
			cin>>x;
			st.push(x);
		}
		if(s == "duplicate"){
			st.push(st.top());
		}
		if(s == "cook"){
			st.pop();
		}
		if(s == "exit"){
			if(st.empty()){
				cout<<"net zakazov";
				return 0;
			}
			else{
				while(!st.empty()){
				cout<<st.top()<<endl;;
				st.pop();
			}
			return 0;
			}
		}
	}
	return 0;
}