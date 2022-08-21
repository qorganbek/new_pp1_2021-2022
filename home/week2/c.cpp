#include <iostream>
using namespace std;
int main () {
	int year;
	cout << "Enter the number" << endl;
	cin >> year;
	if (year % 4 == 0 , year % 100 != 0 )
		cout << "Yes"<< endl;
		else cout << "No" << endl;
		
}