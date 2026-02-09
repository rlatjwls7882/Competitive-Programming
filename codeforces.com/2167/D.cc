#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=2;;i++) {
            bool chk=false;
            for(int j=0;j<n;j++) chk |= gcd(a[j], i)==1;
            if(chk) {
                cout << i << '\n';
                break;
            }
        }
    }
}