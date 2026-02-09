#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;
        set<string> melodies;
        for(int i=0;i<s.length()-1;i++) {
            melodies.insert(s.substr(i, 2));
        }
        cout << melodies.size() << '\n';
    }
}