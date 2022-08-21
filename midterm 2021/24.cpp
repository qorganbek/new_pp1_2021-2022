#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n, need = 0, cnt=0;
	cin >> n;
	while(need<500000){
		cnt++;
		need += 0.3*n;
		n += 0.1*n;
	}   cout << cnt;
}