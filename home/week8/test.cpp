#include <iostream>
using namespace std;
int main (){
	pair<string,pair < string,string > > student[100];
	string id,name,surname;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>name>>surname;
		student[i] = make_pair(id,make_pair(name,surname));
	}
	for(int i=0;i<n;i++){
          cout<<student[i].first<<" "<<student[i].second.first<<" "<<student[i].second.second;
	}
	return 0;

}