#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main () {
    map< int , pair <int ,int > > m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        m[i]=make_pair(x,y);
    }
    
    return 0;
}