#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool Isprime(int n){
	int cnt=0;
	for(int i=2;i<=abs(n);i++){
		if(n%i==0 or abs(n)==i){
			cnt++;
		}
	}
	if(cnt==1){
		return 1;
	}
	return 0;
}
int main () {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	int cnt=count_if(v.begin(),v.end(),Isprime);
	cout<<cnt;
	return 0;
}
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
// bool prime(int a)
// {
//     int count=0;
//  for(int i=2;i<a;i++)
//  {
//      if(a%i==0)
//      {
//          count++;
//      }
//  }
//  if(count==0)
//  {
//      return 1;
//  }
// else
// {
//     return 0;
// }
// }
// int main()
// {
//     int n;
//     int k;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     cin>>k;
//     int count=0;

//     for(int i=0;i<n;i++)
//     {
//         bool result=prime(v[i]);
//         if(result==1 &&v[i]>=k)
//         {
//             count++;
//         }
//     }
//     cout<<count;
// }