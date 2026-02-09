#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s;
        int cnt1=0, cnt2=0;
        for(int i=0;i<n-3;i++) {
            if(s.substr(i, 4)=="2026") cnt1++;
            if(s.substr(i, 4)=="2025") cnt2++;
        }
        if(cnt1) cout << "0\n";
        else if(cnt2) cout << "1\n";
        else cout << "0\n";
    }
}