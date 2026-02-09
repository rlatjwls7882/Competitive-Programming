#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int R; cin >> R;
    if(R<100) cout << 100-R;
    else if(R<200) cout << 200-R;
    else if(R<300) cout << 300-R;
    else cout << 400-R;
}