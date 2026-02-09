#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;

    int cnt=0;
    while(N-->0) {
        string s; cin >> s;
        if(s.compare("Takahashi")==0) cnt++;
    }
    cout << cnt;
}