#include <iostream>
#include <algorithm>
using namespace std;
string s;
bool isPalindrome(char a[]){
	for(int i=0;i<s.size()/2;i++){
		if(a[i]!=a[s.size()-i-1]){
			return 0;
		}
	}
	return 1;
}



int main () {
	cin>>s;
	char a[s.size()];
	for(int i=0;i<s.size();i++){
		a[i]=s[i];
	}
	sort(a,a+s.size());
	do{
		if(isPalindrome(a)){
			cout<<"Luffy is the pirate king!";
			return 0;
		}
	} while(next_permutation(a,a+s.size()));
	cout<<"Onepiece";
	return 0;
}