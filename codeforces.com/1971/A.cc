#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int t; cin >> t;
    while(t-->0) {
        int a, b; cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << '\n';
    }
}