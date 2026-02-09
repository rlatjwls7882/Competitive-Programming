#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;

        for(int i=0;i<n;i++) {
            for(int j=0;j<2;j++) {
                for(int k=0;k<n;k++) {
                    if((i+k)%2==0) cout << "##";
                    else cout << "..";
                }
                cout << '\n';
            }
        }
    }
}