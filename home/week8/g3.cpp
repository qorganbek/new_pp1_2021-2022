#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n,int k){
     // if(n==1){
     //           return 0;
     //      }
     for(int i=2;i<=n;i++){
          if(n==i && n>=k){
               return 1;
          }
          else if (n%i==0){
               return 0;
          }
     }
 }
 int main (){
     int n,x,k;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++){
          cin>>x;
          v.push_back(x);
     }
     int cd=0;
     cin>>k;
     for(int i=0;i<v.size();i++){
          if(isPrime(v[i],k)){
               cd++;
          }
     }
     cout<<cd;
     return 0;
 }