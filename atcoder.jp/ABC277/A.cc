#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, X; cin >> N >> X;
    for(int i=1;i<=N;i++) {
        int P; cin >> P;
        if(P==X) {
            cout << i;
            return 0;
        }
    }
}