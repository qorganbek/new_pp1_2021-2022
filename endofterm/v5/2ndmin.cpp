#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n); //[0,0,0,0]
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	// int x; cin >> x;
    	// v[i] = x;
    }
    // vector<int> v;
    // for(int i = 0; i < n; i++) {
    // 	int temp; cin >> temp;
    // 	v.push_back(temp);
    // }

    sort(v.begin(), v.end());
    int cnt = 0;
    bool isSecond = false;
    for(int i = 0; i < v.size(); i++) { // 1 1 1 1 1 1 1 1 2 3, 1 2 3, 1 1 1 2 2 3
    	if(isSecond) {
    		cnt++;
    	}

    	if(v[i] != v[i+1] && !isSecond) {
    		isSecond = true;
    	} else if(v[i] != v[i+1] && isSecond) {
    		break;
    	}
    }

    cout << cnt;
    return 0;
}