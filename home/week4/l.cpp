#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, pos_row = 1, pos_col = 1;
    long long sum = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[j][i];
        }
    }
    cout << "coordinates of min elements:\n";   
    for(int i = 1; i <= m; i++){
        int min = a[i][1];
        for(int j = 1; j <= n; j++){
            if(a[i][j] < min){
                min = a[i][j];
                pos_row = j;
                pos_col = i;
            }
        }
        sum += min;
        cout << pos_row << ";" << pos_col << endl; 
    }
    cout << "Their sum:\n" << sum;
}