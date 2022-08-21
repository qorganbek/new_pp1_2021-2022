#include <iostream>
using namespace std;

bool id(int a[], int n, int x)
{
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            found = true;
        }
    }
    if(found == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(id(a, n, x))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}