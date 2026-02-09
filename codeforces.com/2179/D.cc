#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int mx = (1<<n)-1;

        set<int> rem;
        for(int i=0;i<=mx;i++) rem.insert(i);

        for(int i=n;i>=0;i--) {
            int cur=(1<<i)-1;
            int curMx = (1<<n-i)-1;
            for(int j=0;j<=curMx;j++) {
                int x = cur+(j<<i);
                if(rem.count(x)) {
                    cout << x << ' ';
                    rem.erase(x);
                }
            }
        }
        cout << '\n';
    }
}