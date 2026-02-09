#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M; cin >> N >> M;
    int A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }

    int sum=0;
    while(M-->0) {
        int B; cin >> B;
        sum += A[B-1];
    }
    cout << sum;
}