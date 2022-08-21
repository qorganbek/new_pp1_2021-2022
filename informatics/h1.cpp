#include <bits/stdc++.h>
using namespace std;
int main (){
    int s;
    cin>>s;
    s /= 10;
    ostringstream str1;
    str1<<s;
    string a = str1.str();
    cout<<a[a.size()-1];

    return 0;
}