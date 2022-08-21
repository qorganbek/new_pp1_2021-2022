#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValidIp(string ip) {
	vector<int> nums;
	string t = "";
	for(int i = 0; i < ip.size(); i++) {
		if(s[i] != '.') {
			t += s[i];
		} else {
			nums.push_back(stoi(t));
			t = "";
		}
	}

	return nums.size() == 4 ? true : false;
}

int main() {
	string s; cin >> s;
	string ip = "";
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '-' && s[i+1] == '0') {
			ip += '0';
			i += 1;
		} else {
			ip += s[i];
		}
	}
	cout << ip;
	if(isValidIp(ip)) cout << 1;
	else cout << 0;
	return 0;
}
