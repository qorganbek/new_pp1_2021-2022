#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = ceil(sqrt(n)+5);
    for (int i = 1; i < x; i++)
    {
        if(i*i<=n){
            cout << i * i << endl;

        }
        
    }
    return 0;
}