#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> m;
        bool chk=false;
        while(n--) {
            int a; cin >> a;
            if(++m[a]==2) {
                chk=true;
            }
        }
        cout << (chk ? "YES\n" : "NO\n");
    }
}
