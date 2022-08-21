#include <iostream>
#include <map>
using namespace std;
int main () {
	int n;
	map < pair < char,int > , pair < char , int > > ::iterator it;
	cin>>n;
	map< pair<char,int > , pair<char,int > > m;
	for(int i=0;i<n;i++){
		int x,y;
		char a,b,l;
		cin>>l>>a>>x>>b>>y;
		m.emplace(make_pair(a,x),make_pair(b,y));	
		if( l == '+'){
			for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first.first<<" + "<<(*it).second.first<<" = "<< (*it).first.second+(*it).second.second<<endl;	
	}
		}
		else if(l=='*'){
			for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first.first<<" + "<<(*it).second.first<<" = "<< (*it).first.second*(*it).second.second<<endl;	
	}	
		}
		else if(l=='-'){
			for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first.first<<" + "<<(*it).second.first<<" = "<< (*it).first.second-(*it).second.second<<endl;	
	}	
		}
	}
	return 0;
}