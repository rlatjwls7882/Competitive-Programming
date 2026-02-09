#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int A, B, C; cin >> A >> B >> C;

    cout << max(max(A*10+B+C, B*10+A+C), C*10+A+B);
}