#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string binarysum="";
    while (n!=0)
    {
        binarysum +=to_string(n%2);
        n /= 2;
    }
    int sum=0;
    reverse(binarysum.begin(),binarysum.end());
    for(int i=binarysum.size()-1;i>=0;i--){
        if (binarysum[i]=='1'){
            sum += pow(2,i);
        }
    }
    // cout<<binarysum<<endl;
    cout<<sum;
    return 0;
}