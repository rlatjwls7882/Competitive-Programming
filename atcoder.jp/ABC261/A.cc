#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int line[100] = {0, };
    for(int i=0;i<2;i++) {
        int L, R; cin >> L >> R;
        line[L]++;
        line[R]--;
    }
    
    int cnt=0;
    for(int i=0;i<100;i++) {
        if(i>=1) {
            line[i] += line[i-1];
        }
        if(line[i]==2) {
            cnt++;
        }
    }
    cout << cnt;
}