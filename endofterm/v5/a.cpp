#include <bits/stdc++.h>
using namespace std;

int sum = 0, cnt = -1;

void change(int n){
	cnt++;
	if(n>0 && n<10){
		cout << n << " " << cnt;
		return;
	}
	else{
		while(n>0){
			sum += n%10;
			n/=10;
		}	n = sum;
			sum = 0;
	}
	change(n);
}

int main(){
	int n;
	cin >> n;
	change(n);
}