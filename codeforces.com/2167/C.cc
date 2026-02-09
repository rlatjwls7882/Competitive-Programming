#include<bits/stdc++.h>
using namespace std;

int a[200000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        bool even=false, odd=false;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]%2) odd=true;
            else even=true;
        }
        if(odd && even) sort(a, a+n);

        for(int i=0;i<n;i++) cout << a[i] << ' '; cout << '\n';
    }
}