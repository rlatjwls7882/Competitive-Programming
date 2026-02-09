#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; string s; cin >> n >> s;

    ll evenCost=0, oddCost=0;
    ll cnt=0;
    for(int i=0;i<n*2;i++) {
        if(s[i]=='A') {
            evenCost += abs(cnt*2-i);
            oddCost += abs(cnt*2+1-i);
            cnt++;
        }
    }
    cout << min(evenCost, oddCost);
}
