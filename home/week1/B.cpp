#include <iostream>
#include <cmath>
using namespace std;
int main () {
int age , sym , pas , x , y ;
cin >> age ;
cin >> sym ;
y = (123 % 10 ) ;
x = floor (sym / 100) ;
pas = x + y + age ;
cout << pas ;

}

