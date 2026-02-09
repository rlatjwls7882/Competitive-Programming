#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;

    int cnt=0;
    for(int i=0;i<N;i++) {
        string s; cin >> s;
        if(s.compare("For")==0) cnt++;
    }

    if(cnt>N/2) cout << "Yes";
    else cout << "No";
}