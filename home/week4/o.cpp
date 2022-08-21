#include <iostream>
using namespace std;
int main (){
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int posi=100;
	int posj=110;
	int max=-1e9;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(max<a[i][j]&& i == j ){
				max=a[i][j];
				posi=i+1;
				posj=j+1;
			}
		}
	}
	cout<<"Maximum element is "<< max<<" with"<<endl;
	cout<<"coordinates: "<<posi<<";"<<posj<<endl;

}