#include<bits/stdc++.h>
using namespace std;

struct line {
    int s, e, w;
    bool operator<(const line l) const {
        return e < l.e;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<deque<int>> deqs(n+1);
        vector<line> lines;
        for(int i=1;i<=n;i++) {
            int a; cin >> a;
            deqs[a].push_back(i);
            if(deqs[a].size() == a) {
                lines.push_back({deqs[a].front(), deqs[a].back(), a});
                deqs[a].pop_front();
            }
        }
        sort(lines.begin(), lines.end());

        int last=1;
        vector<int> dp(n+1);
        for(line l : lines) {
            while(last+1<l.s) dp[last+1] = max(dp[last+1], dp[last]), last++;
            dp[l.e] = max(dp[l.e], dp[l.s-1] + l.w);
        }
        cout << *max_element(dp.begin(), dp.end()) << '\n';
    }
}
