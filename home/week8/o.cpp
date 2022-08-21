#include <iostream>
#include <set>
using namespace std;
int main (){
	string st;
	cin>>st;
	for(int i=0;i<st.size();i++){
		if(st[i]>='A'&& st[i]<='Z'){
			st[i]=char((int)st[i]+32);
		}
	}
	set<char> s(st.begin(),st.end());
	cout<<s.size()<<endl;
	set<char>::iterator it;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}