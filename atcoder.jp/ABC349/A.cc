#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int sum=0;
    while(N-->1) {
        int tmp; cin >> tmp;
        sum += tmp;
    }
    cout << -sum;
}