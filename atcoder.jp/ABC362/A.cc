#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int R, G, B; cin >> R >> G >> B;
    string C; cin >> C;
    if(C[0]=='R') cout << min(G, B);
    else if(C[0]=='G') cout << min(R, B);
    else cout << min(R, G);
}