#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 3e5+1;

struct element {
    ll w, p;
    bool operator<(const element e) const {
        return w+p < e.w+e.p;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        ll sumW=0;
        priority_queue<element> pq;
        while(n--) {
            ll w, p; cin >> w >> p;
            sumW += w;
            pq.push({w, p});
        }

        ll sumP=0;
        while(!pq.empty()) {
            if(sumW<=sumP) break;
            auto top = pq.top(); pq.pop();
            sumP+=top.p;
            sumW-=top.w;
        }
        cout << pq.size() << '\n';
    }
}