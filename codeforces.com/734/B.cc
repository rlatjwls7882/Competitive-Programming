#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;

    int cnt = min(min(a, c), d);
    int sum = 256*cnt;
    a-=cnt; c-=cnt; d-=cnt;

    cnt = min(a, b);
    sum += 32*cnt;
    cout << sum;
}