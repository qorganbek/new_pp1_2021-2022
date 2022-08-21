#include <iostream>
using namespace std;
int main (){
  int n,f;
  cin>>n>>f;
  int cnt=0;
  for(int i=1;i<n;i++){
    if(n>500){
      if(n%i==0){
        cnt++;
        if(cnt==2){
          if(f%2==0){
            cout<<"Good job!";
          }
          else cout<<"Try next time!";
        }
        else cout<<"Try next time!";
      }
      else cout<<"Try next time!";
    }
    else cout<<"Try next time!";
  }
  return 0;
}