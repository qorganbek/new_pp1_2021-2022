#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double n;
	char k;
	cin>>n>>k;
	if(k=='k'){
		int a;
		cin>>a;
		double z=n/1024;
		cout<<fixed;
		cout<<setprecision(a)<<z;
	}
	else if(k=='b'){
		cout<<n*1024;
	}
	return 0;
}