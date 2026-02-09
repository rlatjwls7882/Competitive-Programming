#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    if(N%2==0) {
        cout << N;
    } else {
        cout << N*2;
    }
}