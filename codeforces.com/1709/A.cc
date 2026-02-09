#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int x; cin >> x;
        int door[4] = {0, };
        for(int i=1;i<=3;i++) {
            cin >> door[i];
        }

        int cnt=0;
        for(int i=x;i!=0;i=door[i]) {
            cnt++;
        }

        if(cnt==3) {
            cout << "YES\n";
        } else {
            cout <<"NO\n";
        }
    }
}