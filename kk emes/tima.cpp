#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    set<int> :: iterator it1;
    set<int> :: iterator it2;
    it1=s.begin();
    it2=s.end();
    cout<<*it1<<" "<<*it2;
}