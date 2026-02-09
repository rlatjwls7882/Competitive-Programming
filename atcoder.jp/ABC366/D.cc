#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    int A[N][N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            for(int k=0;k<N;k++) {
                cin >> A[i][j][k];
            }
        }
    }

    int preSum[N+1][N+1][N+1];
    for(int i=0;i<=N;i++) {
        for(int j=0;j<=N;j++) {
            for(int k=0;k<=N;k++) {
                preSum[i][j][k]=0;
            }
        }
    }

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            for(int k=1;k<=N;k++) {
                preSum[i][j][k] = A[i-1][j-1][k-1]+preSum[i][j-1][k]+preSum[i][j][k-1]-preSum[i][j-1][k-1] +preSum[i-1][j][k]-preSum[i-1][j-1][k]-preSum[i-1][j][k-1]+preSum[i-1][j-1][k-1];
            }
        }
    }

    int Q; cin >> Q;
    while(Q-->0) {
        int Lx1, Rx1, Lx2, Rx2, Lx3, Rx3; cin >> Lx1 >> Rx1 >> Lx2 >> Rx2 >> Lx3 >> Rx3;
        cout << preSum[Rx1][Rx2][Rx3]-preSum[Rx1][Lx2-1][Rx3]-preSum[Rx1][Rx2][Lx3-1]+preSum[Rx1][Lx2-1][Lx3-1] -preSum[Lx1-1][Rx2][Rx3]+preSum[Lx1-1][Lx2-1][Rx3]+preSum[Lx1-1][Rx2][Lx3-1]-preSum[Lx1-1][Lx2-1][Lx3-1] << '\n';
    }
}