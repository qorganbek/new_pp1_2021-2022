#include <iostream>
#include <map>
#define it_m map<string,int>::iterator
using namespace std;
int main (){
	string s;
	cin>>s;
	map<string ,int> m;
	m["MON"]=6;
	m["TUE"]=5;
	m["WED"]=4;
	m["THU"]=3;
	m["FRI"]=2;
	m["SAT"]=1;
	m["SUN"]=7;
	pair<it_m, it_m > p=m.equal_range(s);
	it_m iter;
	for(iter=p.first;iter!=p.second;iter++){
		cout<<(*iter).second;
	}
 	return 0;
}