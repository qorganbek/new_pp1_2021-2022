#include <iostream>
using namespace std;
int main (){
	int digcnt[10]={0,0,0,0,0,0,0,0,0,0} ;
	string number;
	cin>>number;
	for(int i=0;i<number.size();i++){
		int index = (int)number[i]-'0' ;
		digcnt[index]++;
	}
	for (int i=0;i<number.size();i++){
		cout << digcnt[i]<<" ";
	}
}