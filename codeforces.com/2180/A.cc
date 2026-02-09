#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int l, a, b; cin >> l >> a >> b;
        int mx=a, cur=a;
        while(true) {
            bool chk=false;
            for(int i=0;i<5000;i++) {
                cur = (cur+b)%l;
                if(mx<cur) {
                    mx=cur;
                    chk=true;
                }
            }
            if(!chk) break;
        }
        cout << mx << '\n';
    }
}