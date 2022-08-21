#include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n][m];
	int startNum = 0;

	for(int i = 0; i < n; i++){        
        if(i % 2 == 0) {
            for(int j = 0; j < m; j++) {
            	a[i][j] = startNum;
            	startNum++;
            }
        } else {
            for(int j = m-1; j >= 0; j--) {
            	a[i][j] = startNum;
            	startNum++;
            }                
        }
    }
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout.width(3);
			cout << a[i][j];
		} 
		cout << endl;
	}

	return 0;
}