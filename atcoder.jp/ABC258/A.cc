#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int K; cin >> K;

    int h=21, m=K;
    if(m>=60) {
        h++;
        m-=60;
    }

    cout << h << ':';
    if(m>=10) cout << m;
    else cout << 0 << m;
}