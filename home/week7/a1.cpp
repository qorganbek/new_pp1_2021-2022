#include <iostream>
using namespace std;
int pow2(int n, int d){
	if(d!=0){
		
		return (n*pow2(n,d-1));
	}
	else 
		return 1;
}

int main()
{
int d;
cin>>d;
long long k=pow2(2,d);
cout<<k;
    return 0;
}
