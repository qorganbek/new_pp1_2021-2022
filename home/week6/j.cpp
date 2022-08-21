#include <iostream>
using namespace std;

void max(int a[])
{
    int maxi = a[0];
    for(int i = 0; i < 4; i++)
    {
        if(a[i] > maxi)
        {
            maxi = a[i];
        }
    }
    cout << maxi;
}
int main()
{
    int a[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    max(a);
}