#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cout << "Enter the number" << endl;
	cin >> n;
	if (n % 2 == 1)
		cout << n << " is odd,super" << endl;
	else if (2 < n < 5) 
		cout << n << " is even, not super" << endl; 
	else if (6 < n < 20)
		cout << n << " is even, super"  << endl;
	else if (n < 20)
		cout << n << " not  super"  << endl;
}
