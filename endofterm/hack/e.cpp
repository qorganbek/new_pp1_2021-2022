#include <bits/stdc++.h>
using namespace std;

bool bracket(string s){
	stack<char> st;
	for(int i=0;i<s.size();i++){
	if( s[i] == '(' or s[i] == '{' or s[i] == '<' or s[i] == '[' ){
		st.push(s[i]);
	} 
	else {
		if(st.empty()){
			return 0;
		}
		if(s[i]==')' && st.top()!='('){
			return 0;
		}
		if(s[i]=='}' && st.top()!='{'){
			return 0;
		}
		if(s[i]==']' && st.top()!='['){
			return 0;
		}
		if(s[i]=='>' && st.top()!='<'){
			return 0;
		}
		st.pop();
	}
}
	return st.empty();
}


int main () {
	int n;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++){
		string t;
		getline(cin,t);
		for(int j=0;j<t.size();j++){
			if(t[j] == ')' || t[j]=='(' || t[j]=='[' || t[j]==']' || t[j]=='<' || t[j]=='>' || t[j]=='}' || t[j]=='{'){
		     s+=t[j];
	       }
	     }
	}
	cout<<s;
	if(bracket(s)){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}