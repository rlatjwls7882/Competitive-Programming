#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int Q; cin >> Q;

    queue<int> q;
    while(Q--) {
        int n; cin >> n;
        if(n==1) {
            int x; cin >> x;
            q.push(x);
        } else {
            cout << q.front() << '\n'; q.pop();
        }
    }
}
