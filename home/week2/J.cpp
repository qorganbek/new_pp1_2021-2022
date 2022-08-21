#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n;cin >> n;
	int numzero=0;
	int a;
	while (n > 0){
		cin >> a;
		while (a) {
			if (a%10==0){
        numzero++;
       }
       a=a/10;
if (a==0)
	     break;
		}
		n--;
	}
	cout << numzero;
}