#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, A, B; cin >> N >> A >> B;
    for(int i=1;i<=N;i++) {
        int tmp; cin >> tmp;
        if(tmp==A+B) {
            cout << i;
            return 0;
        }
    }
}