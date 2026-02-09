#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int sumA=0;
    for(int i=0;i<9;i++) {
        int A; cin >> A;
        sumA += A;
    }

    int sumB=0;
    for(int i=0;i<8;i++) {
        int B; cin >> B;
        sumB += B;
    }
    cout << max(sumA-sumB+1, 0);
}