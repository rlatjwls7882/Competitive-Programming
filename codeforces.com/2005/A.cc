#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int cnt=n/5;
        for(int i=0;i<n/5 + (n%5>=1);i++) cout << 'a';
        for(int i=0;i<n/5 + (n%5>=2);i++) cout << 'e';
        for(int i=0;i<n/5 + (n%5>=3);i++) cout << 'i';
        for(int i=0;i<n/5 + (n%5>=4);i++) cout << 'o';
        for(int i=0;i<n/5;i++) cout << 'u';
        cout << '\n';
    }
}