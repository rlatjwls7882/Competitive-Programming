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

        for(int i=0;i<n-1;i++) {
            if(a[i]!=b[i]) {
                if(b[i] == (a[i]^a[i+1])) {
                    a[i] = a[i]^a[i+1];
                }
            }
        }

        string ret = "YES\n";
        if(a[n-1]!=b[n-1]) ret = "NO\n";
        for(int i=n-2;i>=0;i--) {
            if(a[i]!=b[i]) {
                if(b[i] == (a[i]^a[i+1])) {
                    a[i] = a[i]^a[i+1];
                } else {
                    ret="NO\n";
                    break;
                }
            }
        }
        cout << ret;
    }
}
