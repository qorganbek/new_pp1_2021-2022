// #include <bits/stdc++.h>
// using namespace std;

// bool check(int q){
//     int t = sqrt(q);
//     if(t*t == q){
//         return true;
//     }
//     return false;
// }

// int main(){
//     string s;
//     cin >> s;
//     stack<char> st;
//     for(int i = 0; i < s.size(); i++){
//         if(st.size() == 0){
//             st.push(s[i]);
//         }
//         else{
//             int x = st.top() - '0';
//             int y = s[i] - '0';
//             x = x*10 + y;
//             if(check(x)){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//     }
//     if(st.size() == 0){
//         cout << "Stack is empty\n";
//         return 0;
//     }
//     while(st.size() > 0){
//         cout << st.top();
//         st.pop();
//     }
// }
#include <iostream>
#include <cmath>
#include <stack>


bool check(int x){
	int q=sqrt(x);
	if(q*q==x){
		return true;
	}
	return false;
}

using namespace std;
int main ( ) {
	string s;cin>>s;
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(st.size()==0){
			st.push(s[i]);
		}
		else {
			int x=st.top()-'0';
			int y=s[i]-'0';
			x=x*10+y;
			if(check(x)){
				st.pop();
			}
			else {
				st.push(s[i]);
			}
		}
	}
	if(st.size()==0){
		cout<<"Stack is empty";
		return 0;
	}
	else {
		while(st.size()!=0){
			cout<<st.top();
			st.pop();
		}
	}
	return 0;
}