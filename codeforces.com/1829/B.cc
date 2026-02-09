#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
         int n; cin >> n;

         int _max=0, cur=0;
         while(n-->0) {
            int a; cin >> a;
            if(a==1) {
                cur=0;
            } else {
                _max = max(_max, ++cur);
            }
         }
         cout << _max << endl;
    }
}