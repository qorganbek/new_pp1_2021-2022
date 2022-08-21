#include <iostream>
using namespace std;

void binary(int n){
	if(n == 0)
		return;

	binary(n/2);
	cout << n%2;
}

int main(){
	int n; cin >> n;
	// int t;
	// string answer = "";

	// while(n > 0) {
	// 	t = n % 2;
	// 	n /= 2;

	// 	answer = char('0' + t) + answer;
	// }

	// cout << answer;
	binary(n);
}