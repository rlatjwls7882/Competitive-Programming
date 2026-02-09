#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int X, Y, N; cin >> X >> Y >> N;

    if(Y<X*3) {
        cout << N/3*Y+(N-N/3*3)*X;
    } else {
        cout << X*N;
    }
}