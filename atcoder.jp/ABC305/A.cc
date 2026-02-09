#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int case1 = ceil(N/5.)*5;
    int case2 = N/5*5;

    cout << (case1-N<N-case2?case1:case2);
}