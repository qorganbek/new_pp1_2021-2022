#include <iostream>
using namespace std;
int main(){
    int n, num = 1, temp = 0;
    cin >> n;
    int a[n][n];
    int directrion = 0;
    int left = 0, right = n - 1, up = 0, down = n - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;        
        }
    }
    while(num != n * n + 1){
        if(directrion == 0){
            for(int i = left; i <= right; i++){
                a[up][i] = num;
                num++;
            }
            up++;
        }
        else if(directrion == 1){
            for(int i = up; i <= down; i++){
                a[i][right] = num;
                num++;
            }
            right--;
        }
        else if(directrion == 2){
            for(int i = right; i >= left; i--){
                a[down][i] = num;
                num++;
            }
            down--;
        }
        else if(directrion == 3){
            for(int i = down; i >= up; i--){
                a[i][left] = num;
                num++;
            }
            left++;
        }
        directrion = (directrion + 1) % 4;
        
        // temp++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

/*

a[X][Y]

                  X
1  2  3  4  5   | 0
6  7  8  9  10  | 1         (1, 4), (2, 4), (3, 4), (4, 4)      X++, Y = Last       6  7  8  9
11 12 13 14 15  | 2         (4, 3), (4, 2), (4, 1), (4, 0)      Y--, X = Last       10 11 12 13
16 17 18 19 20  | 3         (3, 0), (2, 0), (1, 0)              X--, Y = 0          14 15 16
21 22 23 24 25  | 4         (1, 1), (1, 2), (1, 3)              Y++, X = 1          17 18 19
----------------            (2, 3), (3, 3)                      X++, Y = Last - 1   20 21
0  1  2  3  4               (3, 2), (3, 1)                      Y--, X = Last - 1   22 23
Y                           (2, 1)                              X--, Y = 1          24
                            (2, 2)                              Y++, X = Last - 2   25

1  2  3  4  5   | 0
16 17 18 19 6   | 1
15 24 25 20 7   | 2
14 23 22 21 8   | 3
13 12 11 10 9   | 4
----------------
0  1  2  3  4


n = 6

1  2  3  4  5  6    | 0 <- up
7  8  9  10 11 12   | 1
13 14 15 16 17 18   | 2
19 20 21 22 23 24   | 3
25 26 27 28 29 30   | 4
31 32 33 34 35 36   | 5 <- down
--------------------
0  1  2  3  4  5
left            right

1  2  3  4  5  6    | 0
20 21 22 23 24 7    | 1
19 32 33 34 25 8    | 2
18 31 36 35 26 9    | 3
17 30 29 28 27 10   | 4
16 15 14 13 12 11   | 5
--------------------
0  1  2  3  4  5


*/