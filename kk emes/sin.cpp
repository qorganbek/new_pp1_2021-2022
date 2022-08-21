
#include <iostream>      
#include <cmath>       
using namespace std;
#define PI 3.14159265

int main ()
{
  double param, result;
 cin>>param;
  result = sin (param*PI/180);
  cout<<result;
  return 0;
}