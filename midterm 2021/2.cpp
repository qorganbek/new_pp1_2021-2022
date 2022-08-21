#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	string sa = "", sb = "";
	int n,a,b,aa,bb,aaa,bbb;
	cin >> n >> a >> b;
	while(a>0){
		sa += to_string(a%2);
		a /= 2;
	}
	while(b>0){
		sb += to_string(b%2);
		b /= 2;
	}
	while(sa.size()>sb.size()){
		sb += '0';
	}
	while(sb.size()>sa.size()){
		sa += '0';
	}
	reverse(sa.begin(), sa.end());
	reverse(sb.begin(), sb.end());
	int suma=0, sumb=0, poww=0;
	char temp = sa[sa.size()-n-1];
	sa[sa.size()-n-1] = sb[sb.size()-n-1];
	sb[sb.size()-n-1] = temp;

	for(int i = sa.size()-1; i>=0; i--){
		suma += (sa[i]-48)*pow(2,poww);
		poww++;
	}   poww = 0;
	for(int i = sb.size()-1; i>=0; i--){
		sumb += (sb[i]-48)*pow(2,poww);
		poww++;
	}
	if(suma>sumb){
		cout << "Good deal for the first number";
	} else{
		cout << "Good deal for the second number";
	}
}