#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> s;
        while(n--) {
            int a; cin >> a;
            s.insert(a);
        }
        cout << s.size() << '\n';
    }
}