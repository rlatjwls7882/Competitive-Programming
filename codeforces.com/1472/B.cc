#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        int sum=0;
        for(int i=0;i<n;i++) {
            int tmp; cin >> tmp;
            sum += tmp;
        }

        if(sum%2==1||n%2==1&&sum==n*2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}