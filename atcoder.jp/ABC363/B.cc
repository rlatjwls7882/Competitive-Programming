#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, T, P; cin >> N >> T >> P;
    int L[N];
    for(int i=0;i<N;i++) {
        cin >> L[i];
    }
    sort(L, L+N, greater<int>());

    cout << max(0, T-L[P-1]);
}