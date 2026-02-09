#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    string s; cin >> s;

    int idx = (s[3]-'0')*100+(s[4]-'0')*10+(s[5]-'0');
    if(1<=idx&&idx<=315 || 317<=idx&&idx<=349) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}