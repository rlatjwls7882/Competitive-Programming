#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; string s; cin >> n >> s;
        cout << s.find_last_of('B')-s.find_first_of('B')+1 << endl;
    }
}