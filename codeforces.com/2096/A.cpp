#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s;
        vector<int> res(n);

        int cnt=1;
        for(int i=n-2;i>=0;i--) {
            if(s[i]=='<') res[i+1] = cnt++;
        }
        for(int i=0;i<n;i++) {
            if(res[i]==0) res[i] = cnt++;
        }

        for(int e:res) cout << e << ' ';
        cout << '\n';
    }
}