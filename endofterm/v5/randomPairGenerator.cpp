#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector< pair<int, int> > v;
	
	int n; cin >> n;
	while(n--) {
		int a, b; cin >> a >> b;
		int count = 0;
		for(int i = 0; i < v.size(); i++) {
			int first = v[i].first;
			int second = v[i].second;
			if((a == first && b == second) || (a == second && b == first)) {
				count++;
			}
		}
		cout << count << endl;
		v.push_back(make_pair(a,b));
	}

	return 0;
}