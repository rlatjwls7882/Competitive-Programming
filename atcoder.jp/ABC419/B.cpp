#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int q; cin >> q;

    priority_queue<int, vector<int>, greater<int>> pq;
    while(q--) {
        int op; cin >> op;
        if(op==1) {
            int x; cin >> x;
            pq.push(x);
        } else {
            cout << pq.top() << '\n'; pq.pop();
        }
    }
}