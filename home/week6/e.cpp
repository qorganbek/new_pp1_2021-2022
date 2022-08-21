#include <iostream>
#include <cmath>
using namespace std;
float hypotenuse(int a,int b){
	float p=sqrt(a*a+b*b);
	return p;
}

int main (){
int a,b;
cin>>a>>b;
cout<<hypotenuse(a,b);
}