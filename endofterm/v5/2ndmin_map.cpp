#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> m;
    while(n--) {
    	int num; cin >> num;
    	if(m.count(num) == 0) {
    		m[num] = 1;
    	} else {
    		m[num]++;
    	}
    }

    map<int, int> :: iterator it = m.begin();
    it++;
    cout << it->second;
    return 0;
}