#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnts[26];
	for(int i = 0; i < 26; i++) {
		cnts[i] = 0;
	}

	string s; cin >> s;
	for(int i = 0; i < s.size(); i++) {
		cnts[s[i] - 97]++;
	}

	for(int i = 0; i < 26; i++) {
		if(cnts[i] == 2) {
			cout << char(i + 97);
		}
	}

	// for(int i = 0; i < 26; i++) {
	// 	cout << char(97 + i) << " " << cnts[i] << endl;
	// }
	return 0;
}