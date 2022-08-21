#include <iostream>
using namespace std;
int main (){
	string s;
	cin>>s;
	int cnt=1,max=0;
	char k;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			cnt++;
		}
		else {
			if(cnt>max){
				max=cnt;
				cnt=0;
				k=s[i];
			}
			else cnt=0;
		}
	}
	cout<<k<<" "<<max;
	return 0;
}