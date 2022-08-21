#include <iostream>
using namespace std;
int main (){
    int n,m;
    long long num = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i<n;i++){
        long long cnt = 0 ;
        for(int j = 0; j < m ;j++){
            cin >> a[i][j];
            cnt+=a[i][j];
             num=cnt/m;
        } cout << num << " " ;
    }
 }