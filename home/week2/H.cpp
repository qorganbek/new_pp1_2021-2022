#include <iostream>
#include <cmath>
using namespace std;
int main () {
int even=0 , odd=0 ;
int n;cin >> n;
int num;
while  (n > 0){
cin >> num;
if (num % 2 ==0)even++;
else odd++;
n--;
}
cout << even << " " << odd;

}