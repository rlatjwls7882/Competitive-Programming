#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int deepestIdx, deepestDepth=0;
        vector<pair<int, int>> candidate;
        for(int i=1;i<=n;i++) {
            cout << "? " << i << ' ' << n;
            for(int j=1;j<=n;j++) cout << ' ' << j;
            cout << '\n' << flush;
            int depth; cin >> depth;
            if(deepestDepth<depth) {
                deepestDepth = depth;
                deepestIdx = i;
            }
            candidate.push_back({i, depth});
        }
        sort(candidate.begin(), candidate.end(), [](auto x, auto y) {return x.second>y.second;});

        for(int i=0;i<candidate.size();i++) {
            auto cur = candidate[i];
            if(cur.second==deepestDepth) {
                if(cur.first!=deepestIdx) candidate.erase(find(candidate.begin(), candidate.end(), cur)), i--;
                continue;
            }
            cout << "? " << deepestIdx << ' ' << candidate.size()-1;
            for(auto e : candidate) {
                if(cur.first!=e.first) cout << ' ' << e.first;
            }
            cout << '\n' << flush;

            int inputDepth; cin >> inputDepth;
            if(deepestDepth==inputDepth || i>0 && candidate[i].second==candidate[i-1].second) candidate.erase(find(candidate.begin(), candidate.end(), cur)), i--;
        }

        cout << "! " << candidate.size();
        for(auto e : candidate) cout << ' ' << e.first;
        cout << '\n' << flush;
    }
}
