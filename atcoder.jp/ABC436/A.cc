#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; string s; cin >> n >> s;
    for(int i=0;i<n-s.length();i++) cout << 'o';
    cout << s;
}