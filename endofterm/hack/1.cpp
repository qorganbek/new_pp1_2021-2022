#include <iostream>
using namespace std;

bool rec(int n,int index){
    if(index*3+1==n or index*5+1==n){
    return 1;
    }
    else if(index*3+1>n or index*5+1>n){
        return 0;
    }
        rec(n,index+1);
}

int main ()
{
int n;
cin>>n;
if(rec(n,0)){
    cout<<"YES";
}
else {
    cout<<"NO";
}
return 0;
}