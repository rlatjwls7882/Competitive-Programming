#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n, k; cin >> n >> k;

    vector<ll> A = {k};
    while(n--) {
        vector<ll> nextA;
        for(ll e : A) {
            nextA.push_back(e/2);
            nextA.push_back((e+1)/2);
        }
        A = nextA;
    }

    cout << *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end()) << '\n';
    for(ll e : A) cout << e << ' ';
}