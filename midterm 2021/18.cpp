// #include <bits/stdc++.h>
// using namespace std;
// int main (){
// 	int x;
// 	double cnt1=0,cnt2=0;
// 	while(true){
// 		cin>>x;
// 		if(x<0){
// 			break;
// 		}
// 		else {

// 		 if(x%2==0){
// 			cnt1++;
// 		}
// 		else {
// 			cnt2++;
// 		}
// 	}
// 	}
// 	double res1=cnt1*100/(cnt1+cnt2);
//     double res2=100-res1;
// 	cout<< fixed << setprecision(5) << res1 <<" "<< res2 ;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {
    double cnt1=0,cnt2=0;
    int n;
    while(true){
        cin >> n;
        if(n<0){
            break;
        }
        else{
            if(n%2==0)
                cnt1++;
           else
                cnt2++;
        }
    }   
         double res1 = cnt1*100/(cnt1+cnt2);
            double res2 = 100 - res1;
            cout << fixed << setprecision(5) << res1 << " " << res2;
        }
