#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int A, B; cin >> A >> B;

    if(abs(A-B)==1&&(A-1)/3==(B-1)/3) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}