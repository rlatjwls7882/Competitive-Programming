#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;

        if(max(s1, s2)>min(s3, s4) && max(s3, s4)>min(s1, s2)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}