#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string t = "", temp, s = "";
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        t += a[i];
    }
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] != '0')
        {
            temp += t[i];
        }
    }
    for(int i = 0; i < temp.size(); i++)
    {
        s += temp[i];
    }
    reverse(s.begin(), s.end());
    if(s == temp)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
