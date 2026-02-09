#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int a, b, c; cin >> a >> b >> c;
        if(a<b && b<c) {
            cout << "STAIR\n";
        } else if(a<b && b>c) {
            cout << "PEAK\n";
        } else {
            cout << "NONE\n";
        }
    }
}