#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll p[200'000], a[200'000], b[200'000];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll n, x, y; cin >> n >> x >> y;
        string s; cin >> s;
        for(int i=0;i<n;i++) cin >> p[i];
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);

        for(int i=0;i<n;i++) {
            ll cnt=p[i]/2+1;
            p[i]-=cnt;
            if(s[i]=='0') {
                x-=cnt;
                a[i]+=cnt;
            } else {
                y-=cnt;
                b[i]+=cnt;
            }
        }

        for(int i=0;i<n;i++) {
            if(p[i]>0 && x>0) {
                ll cnt = min(p[i], x);
                p[i]-=cnt;
                x-=cnt;
                a[i]+=cnt;
            }
            if(p[i]>0 && y>0) {
                ll cnt = min(p[i], y);
                p[i]-=cnt;
                y-=cnt;
                b[i]+=cnt;
            }
        }
        for(int i=0;i<n;i++) {
            if(s[i]=='0') {
                if(x>0) {
                    p[i]-=x;
                    a[i]+=x;
                    x=0;
                }
                if(y>0) {
                    ll cnt = min(y, a[i]-b[i]-1);
                    y-=cnt;
                    p[i]-=cnt;
                    b[i]+=cnt;
                }
            } else {
                if(y>0) {
                    p[i]-=y;
                    b[i]+=y;
                    y=0;
                }
                if(x>0) {
                    ll cnt = min(x, b[i]-a[i]-1);
                    x-=cnt;
                    p[i]-=cnt;
                    a[i]+=cnt;
                }
            }
        }

        bool chk=true;
        for(int i=0;i<n;i++) {
            if(p[i]>0) chk=false;
        }

        if(x || y || !chk) cout << "NO\n";
        else cout << "YES\n";
    }
}