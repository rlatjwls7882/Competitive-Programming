#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int Q; cin >> Q;
    map<int, int> m;
    while(Q-->0) {
        int n; cin >> n;
        if(n==1) {
            int x; cin >> x;
            m[x]++;
        } else if(n==2) {
            int x; cin >> x;
            if(--m[x]==0) m.erase(x);
        } else {
            cout << m.size() << '\n';
        }
    }
}