#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    string S; cin >> S;

    if(S[N-1]=='o') {
        cout << "Yes";
    } else {
        cout << "No";
    }
}