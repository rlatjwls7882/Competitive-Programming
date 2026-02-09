#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int S[8];
    for(int i=0;i<8;i++) {
        cin >> S[i];
    }

    bool chk=true;
    for(int i=0;i<8;i++) {
        if(S[i]<100||S[i]>675||S[i]%25!=0||i+1<8&&S[i+1]<S[i]) {
            chk=false;
            break;
        }
    }

    cout << (chk ? "Yes" : "No");
}