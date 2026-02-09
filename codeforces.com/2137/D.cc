#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        ll need=0;
        vector<int> b(n), cnt(n+1);
        for(int i=0;i<n;i++) {
            cin >> b[i];
            cnt[b[i]]++;
        }

        for(int i=1;i<=n;i++) {
            if(cnt[i]%i==0) need += cnt[i];
            else need += n+1;
        }

        if(need!=n) cout << "-1\n";
        else {
            int cur=1;
            vector<int> last(n+1);
            for(int i=0;i<n;i++) {
                if(cnt[b[i]]/b[i] != (--cnt[b[i]])/b[i]) last[b[i]]=cur++;
                cout << last[b[i]] << ' ';
            }
            cout << '\n';
        }
    }
}
