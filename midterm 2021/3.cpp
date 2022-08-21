#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s = "";
	while(n>0){
		s += to_string(n%2);
		n /= 2;
	}   while(s.size()!=8){
		 s += '0';
	}	string t = s;
	    reverse(s.begin(), s.end());
	    if(s==t){
	    	cout << "It works!";
	    } else{
	    	cout << "Sad";
	    }
		
	}