#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    int left; cin >> left;
    for(int i=2;i<=N;i++) {
        int tmp; cin >> tmp;
        if(tmp>left) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}