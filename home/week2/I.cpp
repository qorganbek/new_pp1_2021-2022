#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int num;
	cin >> num;
	int a;
	a=0;
	int b;
	while (num > 0){
		cin >> b;
		if (b==7)a++;
		num--;
	}
cout << a;
}