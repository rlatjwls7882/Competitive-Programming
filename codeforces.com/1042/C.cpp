#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map<int, int> S;
        for(int i=0;i<n;i++) {
            int val; cin >> val;
            S[val%k]++;
        }

        bool chk=true;
        for(int i=0;i<n;i++) {
            int val; cin >> val;
            if(S[val%k]) {
                S[val%k]--;
            } else if(S[k-val%k]) {
                S[k-val%k]--;
            } else {
                chk=false;
            }
        }
        cout << (chk ? "YES\n" : "NO\n");
    }
}
