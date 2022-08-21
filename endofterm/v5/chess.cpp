#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector< vector<char> > table;
	for(int i = 0; i < 8; i++) {
		vector<char> temp(8, '0');
		table.push_back(temp);
	}

	int n; cin >> n;
	while(n--) {
		string s; cin >> s;
		char letter = s[0];
		int i = letter - 'A';

		char digit = s[1];
		int j = digit - '0' - 1;

		table[i][j] = '*';
	}

	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			cout << table[i][j];
		}
		cout << endl;
	}
	return 0;
}