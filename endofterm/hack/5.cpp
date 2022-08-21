#include <bits/stdc++.h>
using namespace std;
   int main()
   {
      int n;
      cin >> n;
      vector<int> v;
      for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
      int  max = v[0];
      int  min = v[v.size()-1];
        for(int i=0; i<v.size(); i++){
                if(max<v[i])
                max = v[i];
                if(min>v[i])
                min = v[i];
            }
            
        for(int i=0; i<v.size(); i++){
                if(max==v[i])
                v[i] = min;
            }
            for(auto it : v){
                cout << it << " ";
                }
        return 0;
   }