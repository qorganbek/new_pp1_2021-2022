#include <iostream>
using namespace std;
string s;
string all = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void kinary(int n,int k) {
    if (n<=0) {
        return;
    }
    kinary(n/k,k);
    s+=all[n%k];
}
int main(){
    int n,k;
    cin>>n>>k;
    kinary(n,k);
    cout<<s;
    return 0;
}