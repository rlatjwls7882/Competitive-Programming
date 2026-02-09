#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n, k; cin >> n >> k;

        bool chk=false;
        while(n-->0) {
            int a; cin >> a;
            if(a==k) {
                chk=true;
            }
        }
        cout << (chk?"YES":"NO") << endl;
    }
}