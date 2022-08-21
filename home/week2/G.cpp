#include <iostream>
using namespace std;
int main () {

int n; cin >> n;
int a;
int min = 0;
while (n > 0){
cin >> a;
if (min < a)
   min = a;
n--;
 }
    cout << min ;
}
