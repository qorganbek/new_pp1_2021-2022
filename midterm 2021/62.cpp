#include <bits/stdc++.h>

using namespace std;
int num(string s)
{
	int result = 0;
	for (const auto& c : s)
	{
		result *= 26;
		result += c - 'A' + 1;
	}

	return result;
}

int main()
{
    string s;
    cin >> s;
	cout <<num(s) << endl;
	return 0;
}