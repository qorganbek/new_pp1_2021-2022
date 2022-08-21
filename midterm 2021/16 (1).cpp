#include <iostream>

using namespace std;

int main() {
	int d, m, y; cin >> d >> m >> y;
	if(y >= 1970 && y <= 2035 && d >= 1 && d <= 31 && m >= 1 && m <= 12) {
		if(m == 2 && d > 28) {
			cout << "NO";
		} else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
			cout << "NO";
		} else {
			cout << "YES";
		}
	} else {
		cout << "NO";
	}
	return 0;
}