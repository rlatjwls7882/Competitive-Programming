#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int lastVal, maxL=1, curL=1; cin >> lastVal;
    while(N-->1) {
        int curVal; cin >> curVal;
        if(curVal>lastVal) {
            maxL = max(maxL, ++curL);
        } else {
            curL=1;
        }
        lastVal=curVal;
    }
    cout << maxL;
}