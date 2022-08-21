#include<iostream>
#include<string>
using namespace std;
int sum = 0, t = 0;
void rec(string n, int i, int k){
    if(i == n.size() && n.size() != 1){
        i = 0;
        k++;
        t = sum;
        sum = 0;
        return rec(to_string(t), i, k);
    }else if(n.size() == 1){
        cout << n << ' ' << k;
    }else{
    sum += (int(n[i]) - '0');
    return rec(n, i + 1, k);
    }
}
int main(){
    string n;
    cin >> n;
    rec(n, 0, 0);
}