#include <iostream>
#include <stack>
using namespace std;

bool qs(queue<int> q, stack<int> st){
    while(!q.empty() and !st.empty()) {
        if(q.front() != st.top())
        	return false;
        q.pop();st.pop();
    }

    return true;
}

int main(){
    int n; cin >> n;
    queue<int> q;
    stack<int> st;
    while(n != 0){
        q.push(n%10);
        st.push(n%10);
        n /= 10;
    }

    if(qs(q, st)) cout << "YES";
    else cout << "NO";
    return 0;
}

//121
//1231