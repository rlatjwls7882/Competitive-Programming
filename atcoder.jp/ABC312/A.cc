#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    string S; cin >> S;

    if(S=="ACE" || S=="BDF" || S=="CEG" || S=="DFA" || S=="EGB" || S=="FAC" || S=="GBD") {
        cout << "Yes";
    } else {
        cout << "No";
    }
}