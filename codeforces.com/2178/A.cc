#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cnt=0;
        for(char ch:s) {
            if(ch=='Y') cnt++;
        }
        if(cnt<=1) cout << "YES\n";
        else cout << "NO\n";
    }
}