#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    int idx; string s; cin >> idx >> s;

    if(v[idx-1].compare(s)==0) cout << "Yes";
    else cout << "No";
}
