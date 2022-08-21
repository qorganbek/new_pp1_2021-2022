#include <iostream>
using namespace std;
int main () {
	int n ;
	cout << "Enter the number" << endl;
	cin >> n;
	if (n % 2 == 0 && n != 0 )
		cout << n << " is number even " << endl;
	else if (n % 2 == 1)
		cout << n << " is number odd" << endl;
	else if (n == 0)
		cout << n << " is number none" ;

} 