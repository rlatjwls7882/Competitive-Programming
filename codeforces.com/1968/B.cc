#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n, m; cin >> n >> m;
        string A, B; cin >> A >> B;

        int k=0;
        for(int i=0;i<B.length();i++) {
            if(B[i]==A[k]) {
                k++;
            }
        }
        cout << k << '\n';
    }
}