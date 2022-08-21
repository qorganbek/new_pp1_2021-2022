#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cntd=0,cnth=0,cnto=0;
	int cntd2=0,cnth2=0,cnto2=0;
	for(int i=0;i<n;i++){
		if(a[i]=='H'){
			cnth++;
			if(cnth==3){
				cnth2++;
				cnth=0;
			}
		}
		else if(a[i]=='O'){
			cnto++;
			if(cnto==3){
				cnto2++;
				cnto=0;
			}
		}
		else if(a[i]=='D'){
			cntd++;
			if(cntd==3){
				cntd2++;
				cntd=0;
			}
		}
	}
	cout<<"Orks:"<<" "<<cnto2<<endl;
	cout<<"Dragons:"<<" "<<cntd2<<endl;
	cout<<"Humans:"<<" "<<cnth2<<endl;
	return 0;
}