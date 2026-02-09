#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M; cin >> N >> M;
    int A[M];
    for(int i=0;i<M;i++) {
        cin >> A[i];
    }

    int sum[M] = {0, };
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            int tmp; cin >> tmp;
            sum[j] += tmp;
        }
    }
    
    for(int i=0;i<M;i++) {
        if(A[i]>sum[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}