#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin >> x;
	int count = 0;
	bool isPrime = true;
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) {
			isPrime = false;
			break;
		}
	}

	cout << isPrime;
	return 0;
}

//x = 36 -> 1, 36; also 2,3,.. -> not prime
//[2:6] -> 2&18, 3&12, ...