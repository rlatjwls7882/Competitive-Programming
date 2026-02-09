#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int Y, W; cin >> Y >> W;

    int maxVal = max(Y, W);
    int cnt = max(7-maxVal, 0);

    if(cnt==1 || cnt==5) {
        cout << cnt << "/6";
    } else if(cnt==2 || cnt==4) {
        cout << cnt/2 << "/3";
    } else if(cnt==3) {
        cout << "1/2";
    } else {
        cout << cnt/6 << "/1";
    }
}