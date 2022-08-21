#include <iostream>
using namespace std;

void sum(int n)
{
    int summ = 0;
    while(n > 0)
    {
        summ = summ + n % 10;     // 0 > 0     summ = 0 + 0 + 0 + 2 = 2
        n /= 10;
    }
    cout << summ;       // 1      summ = 3 + 2 + 1 = 6
}
int main()
{
    int n;
    cin >> n;
    sum(n);
}