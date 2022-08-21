#include <iostream>
using namespace std;
int main () {
int n; cin>>n;
int a[n];
long long sum=0;
for (int i=0;n>i;i++){
cin >> a[i];
}
for (int i=0;n>i;i++){
sum = sum + a[i];
}
cout << sum;
}