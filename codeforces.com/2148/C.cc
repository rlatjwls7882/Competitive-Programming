#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int point=0, lastA=0, pos=0;
        while(n--) {
            int a, b; cin >> a >> b;
            if(((a-lastA)%2==0) == (pos==b)) point += a-lastA;
            else point += a-lastA-1;
            lastA = a;
            pos = b;
        }
        cout << point + (m-lastA) << '\n';
    }
}
