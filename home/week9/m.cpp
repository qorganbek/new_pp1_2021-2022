#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            string s;
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else{
            if(q.size() > 0){
                q.pop();   
            }
            if(q.size() > 0){
                cout << q.front() << endl;
            }
            else cout << "queue is empty\n";
        }
    }
}