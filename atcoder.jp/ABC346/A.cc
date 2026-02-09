#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int prev; cin >> prev;
    for(int i=0;i<N-1;i++) {
        int cur; cin >> cur;
        cout << prev*cur << " ";
        prev=cur;
    }
}