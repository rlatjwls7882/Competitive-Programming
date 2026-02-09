#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    string S; cin >> S; S = 'a'+S;

    int cnt=0;
    for(int i=1;i<S.length();i++) {
        int case1 = S[i]-S[i-1]; if(case1<0) case1+=26;
        int case2 = S[i-1]-S[i]; if(case2<0) case2+=26;
        cnt += min(case1, case2);
    }
    cout << cnt;
}