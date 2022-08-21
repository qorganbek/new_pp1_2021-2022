#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	int d,m,y;
	cin>>d>>m>>y;
	if(m==12 and d==31){
		d=1;
		y++;
		m=1;
		cout<<d<<" "<<m<<" "<<y;
		return 0; 
	}
	if( m == 1 or m==3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12){
		if(d==31){
			d=1;
			m++;
		} 
		else {
			d++;
		}
	}
	else if(m==2){
		if(d==28){
			d=1;
			m++;
		}
		else {
			d++;
		}
	}
	else {
		if(d==30){
			d=1;
			m++;
		}
		else {
			d++;
		}
	}
	cout<<d<<" "<<m<<" "<<y;
	return 0;
} 