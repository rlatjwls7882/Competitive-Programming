#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int k, r; cin >> k >> r;

    for(int i=1;;i++) {
        if(k*i%10==r || k*i%10==0) {
            cout << i;
            break;
        }
    }
}