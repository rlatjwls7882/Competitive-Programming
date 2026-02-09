#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 200'001;

int n, k;
int a[MAX], cnt[MAX], cur[MAX];

bool chk() {
    for(int i=1;i<=n;i++) {
        if(cnt[i]%k) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;

        memset(cnt, 0, sizeof cnt);
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        if(!chk()) {
            cout << "0\n";
        } else {
            memset(cur, 0, sizeof cur);
            cur[a[1]]++;
            ll total=0;
            int l=0, r=1;
            while(l<n) {
                l++;
                while(r<n && (cur[a[r+1]]+1)*k<=cnt[a[r+1]]) cur[a[++r]]++;
                cur[a[l]]--;
                total += r-l+1;
            }
            cout << total << '\n';
        }
    }
}
