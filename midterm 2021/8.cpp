#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n,cnt,p=0;
	cin >> n;
	for(int i=0; i<=n; i++){
		cnt = 0;
		p = i;
		while(p>0){
			if(p%2==1){
				cnt++;
			}
				p/=2;
		}	
			
				cout << cnt;
			
}
}