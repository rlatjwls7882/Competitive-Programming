#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;
    while(t-->0) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        int b[n];
        for(int i=0;i<n;i++) {
            cin >> b[i];
        }

        while(k-->0) {
            sort(a, a+n);
            sort(b, b+n);
            if(a[0]<b[n-1]) {
                int tmp = a[0];
                a[0] = b[n-1];
                b[n-1] = tmp;
            }
        }

        int sum=0;
        for(int i=0;i<n;i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
}