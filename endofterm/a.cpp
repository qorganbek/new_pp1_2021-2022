#include <bits/stdc++.h>
using namespace std;
    

    long long k = 0;
	string t = "";
	int cnt = 0;



void check(long long n){
	k=n;
	t+=to_string(k);
	if(t.size()==1){
		cout<<t<<" ";
		cout<<cnt;
	}
	else {
		k=0;
		cnt++;
		t="";
		while(n!=0){
			k+=n%10;
			n/=10;
		}
		check(k);
	}
}


int main () {
	long long n;
	cin>>n;
	check(n);
	return 0;
}