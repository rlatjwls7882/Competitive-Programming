#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    unordered_map<string, int> m({
        {"Monday", 5},
        {"Tuesday", 4},
        {"Wednesday", 3},
        {"Thursday", 2},
        {"Friday", 1},
    });

    string s; cin >> s;
    cout << m[s];
}