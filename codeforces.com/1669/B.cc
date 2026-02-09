#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;
    
    while(t-->0) {
        int n; cin >> n;
        int arr[n+1] = {0, };
        bool chk=false;

        while(n-->0) {
            int a; cin >> a;
            if(!chk && ++arr[a]==3) {
                chk=true;
                cout << a << endl;
            }
        }
        if(!chk) {
            cout << -1 << endl;
        }
    }
}