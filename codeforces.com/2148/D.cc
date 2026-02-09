#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<ll> odd, even;
        while(n--) {
            ll a; cin >> a;
            if(a%2) odd.push_back(a);
            else even.push_back(a);
        }

        ll sum=0;
        if(!odd.empty()) {
            sum += accumulate(even.begin(), even.end(), 0LL);
            sort(odd.begin(), odd.end(), greater<ll>());
            for(int i=0;i<(odd.size()+1)/2;i++) sum += odd[i];
        }
        cout << sum << '\n';
    }
}
