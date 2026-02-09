#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, y; cin >> x >> y;
    if(x==y) {
        cout << x;
    } else {
        for(int i=0;i<=2;i++) {
            if(x!=i && y!=i) {
                cout << i;
                break;
            }
        }
    }
}