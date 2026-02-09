#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int n; cin >> n;

    if(n%2==1) {
        cout << -1;
    } else {
        for(int i=1;i<=n;i+=2) {
            cout << i+1 << " " << i << " ";
        }
    }
}