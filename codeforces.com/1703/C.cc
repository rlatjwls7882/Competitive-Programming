#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }

        for(int i=0;i<n;i++) {
            int b; cin >> b;
            string s; cin >> s;
            for(int j=0;j<b;j++) {
                if(s[j]=='U') {
                    a[i] = (a[i]+9)%10;
                } else {
                    a[i] = (a[i]+1)%10;
                }
            }
            cout << a[i] << " ";
        }
        cout << '\n';
    }
}