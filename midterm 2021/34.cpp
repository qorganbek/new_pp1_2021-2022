#include <iostream>
using namespace std;
int main (){
    char a[2][15];
    for(int i=0;i<2;i++){
        for(int j=0;j<15;j++){
            cin>>a[i][j];
        }
    }
    int cnt1=0,cnt2=0;
        for(int j=0;j<15;j++){
            if((a[0][j] =='R' and a[1][j] =='S') or (a[0][j] =='S' and a[1][j] == 'P') or (a[0][j] == 'P' and a[1][j] == 'R')){
                cnt1++;
            }
            else if(a[0][j]==a[1][j]){
                cnt1++;
                cnt2++;
            }
            else{
                cnt2++;
            }
        }
    if(cnt1>cnt2){
        cout<<"First player wins!";
    }
    else if(cnt1==cnt2){
        cout<<"Friendship";
    }
    else if (cnt1<cnt2){
     cout<<"Second player wins!";
 }
	return 0;
}