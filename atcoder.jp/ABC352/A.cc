#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, X, Y, Z; cin >> N >> X >> Y >> Z;

    if(Y<=Z && Z<=X || X<=Z && Z<=Y) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}