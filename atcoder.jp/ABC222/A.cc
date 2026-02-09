#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;

    for(int i=s.length();i<4;i++) {
        cout << 0;
    }
    cout << s;
}