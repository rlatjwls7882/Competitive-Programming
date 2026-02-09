#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int sum=0;
    for(int i=1;i<=7*N;i++) {
        int cnt; cin >> cnt; sum += cnt;

        if(i%7==0) {
            cout << sum << " ";
            sum=0;
        }
    }
}