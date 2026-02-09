#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int A, B; cin >> A >> B;

    cout << (B%A==0?A+B:B-A);
}