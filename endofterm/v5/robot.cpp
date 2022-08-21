#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector< pair<int, int> > v;

bool was(int x, int y) {
	for(int i = 0; i < v.size(); i++) {
		pair<int, int> p = v[i];
		int curX = p.first;
		int curY = p.second;

		if(x == curX && y == curY) {
			return true;
		}
	}

	return false;
}

int main() {
	queue< pair<int, int> > q;
	
	int n, m; cin >> n >> m;
	char a[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	q.push(make_pair(0,0));
	while(!q.empty()) { //q.empty() == false
		pair<int, int> p = q.front();
		q.pop();
		int x = p.first;
		int y = p.second;
		v.push_back(make_pair(x, y));

		if(x == n-1 && y == m-1) {
			cout << "YES";
			return 0;
		}

		if(x-1 > 0) {
			if(a[x-1][y] != '#') {
				if(!was(x-1, y)) {
					q.push(make_pair(x-1, y));
				}
			}
		}
		if(x+1 < n) {
			if(a[x+1][y] != '#') {
				if(!was(x+1, y)) {
					q.push(make_pair(x+1, y));
				}
			}
		}
		if(y-1 > 0) {
			if(a[x][y-1] != '#') {
				if(!was(x, y-1)) {
					q.push(make_pair(x, y-1));
				}
			}
		}
		if(y+1 < m) {
			if(a[x][y+1] != '#') {
				if(!was(x, y+1)) {
					q.push(make_pair(x, y+1));
				}
			}
		}
	}

	cout << "NO";
	return 0;
}

//q = {[0, 0]}; v = {[0, 0]}
//[-1, 0], [1, 0], [0, -1], [0, 1]
//q = {[1, 0]}; v = {[0, 0], [1, 0]}
//[0, 0], [2, 0], [1, 1], [1, -1]
//