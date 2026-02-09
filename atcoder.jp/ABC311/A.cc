#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;
    string S; cin >> S;

    cout << max(max(S.find('A'), S.find('B')), S.find('C'))+1;
}