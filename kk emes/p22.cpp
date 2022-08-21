#include <iostream>
using namespace std;

int main() {
	int cnt = 0, a;
	while(true) {
		cin >> a;
		if(a != 0) cnt = cnt + 1;
		else break;
	}

	cout << cnt;
	return 0;
}