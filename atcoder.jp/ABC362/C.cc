#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    long long L[N], R[N];
    long long Min=0, Max=0;
    for(int i=0;i<N;i++) {
        cin >> L[i] >> R[i];
        Min += L[i];
        Max += R[i];
    }

    if(Min<=0 && 0<=Max) cout << "Yes\n";
    else {
        cout << "No";
        return 0;
    }

    long long cnt=-Min;
    for(int i=0;i<N;i++) {
        if(!cnt) break;
        if(L[i]<R[i]) {
            long long tmp = min(cnt, R[i]-L[i]);
            L[i] += tmp;
            cnt -= tmp;
        }
    }
    for(int i=0;i<N;i++) {
        cout << L[i] << ' ';
    }
}