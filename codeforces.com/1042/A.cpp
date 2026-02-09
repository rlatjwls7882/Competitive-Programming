#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        int cnt=1;
        while(true) {
            bool chk=false;
            for(int i=0;i<n;i++) {
                if(a[i]>b[i]) {
                    a[i]--;
                    chk=true;
                    break;
                }
            }
            for(int i=0;i<n;i++) {
                if(a[i]<b[i]) {
                    a[i]++;
                    break;
                }
            }
            if(!chk) break;
            cnt++;
        }
        cout << cnt << '\n';
    }
}
