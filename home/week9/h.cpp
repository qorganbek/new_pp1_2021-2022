#include <iostream>
#include <map>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(!m[s])
            m[s]=i;
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
