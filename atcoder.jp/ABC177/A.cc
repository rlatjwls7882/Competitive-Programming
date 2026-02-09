#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int D, T, S; cin >> D >> T >> S;

    if((D+T-1)/T<=S) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}