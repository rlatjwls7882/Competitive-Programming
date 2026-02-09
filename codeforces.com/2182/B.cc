#include<bits/stdc++.h>
using namespace std;

int a, b;

bool chk(int d) {
    int need1=0, need2=0;
    for(int i=0;i<d;i++) {
        if(i%2) need1|=(1<<i);
        else need2|=(1<<i);
    }
    return need1<=a && need2<=b || need1<=b && need2<=a;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        cin >> a >> b;
        for(int i=21;i>=1;i--) {
            if(chk(i)) {
                cout << i << '\n';
                break;
            }
        }
    }
}