#include <iostream>
using namespace std;
int main(){
    int n;
    int max = 0;
    cin >> n;
    int m;
    cin >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        long long cnt = 0;
        for(int j = 0; j< m;j++){
            cin >> a[i][j];
            cnt+=a[i][j];
            if(cnt >max){
                max = cnt ;
            }
        }
    }
    
    cout << max;
    
    
    
}