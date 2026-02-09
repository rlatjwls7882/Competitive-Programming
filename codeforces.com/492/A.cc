#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int cnt=-1;
    for(int i=1;N>=0;i++) {
        N -= i*(i+1)/2;
        cnt++;
    }
    cout << cnt;
}