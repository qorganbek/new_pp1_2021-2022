#include <iostream>
using namespace std;
int main (){
	int d,m,y;
	cin>>d>>m>>y;
	if(0<d<29 && 1969<y<2036 && m==2 ){
		cout<<"YES";
	}
	else if(0<d<32 && 1969<y<2036 && m==3){
        cout<<"YES";
    }
    else if(0<d<32 && 1969<y<2036 && m==1){
        cout<<"YES";    
    }
    else if(0<d<32 && 1969<y<2036 && m==5)
        cout<<"YES";
    else if(0<d<32 && 1969<y<2036 && m==12)
        cout<<"YES";
    else if(0<d<32 && 1969<y<2036 && m==10)
        cout<<"YES";
    else if(0<d<32 && 1969<y<2036 && m==7)
        cout<<"YES";
	else if(0<d<32 && 1969<y<2036 && m==8)
        cout<<"YES";
	else if(0<d<31 && 1969<y<2036 && m==4)
        cout<<"YES";
	else if(0<d<31 && 1969<y<2036 && m==6)
        cout<<"YES";
    else if(0<d<31 && 1969<y<2036 && m==9)
        cout<<"YES";
    else if(0<d<31 && 1969<y<2036 && m==11)
        cout<<"YES";
        else{
        	cout<<"No";
        }
	return 0;
}