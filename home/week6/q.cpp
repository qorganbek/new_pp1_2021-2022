#include <iostream>
using namespace std;
 
void percent_girls(int n,int m){
   int p=(m*100)/n;
   cout<<p;
}

int main (){
int n,m;
cin>>n>>m;
percent_girls(n,m);
}