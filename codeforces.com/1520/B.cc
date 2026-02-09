#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        int length = (int)(log10(n)+1);

        int cnt=0;
        for(int i=1;i<length;i++) {
            cnt+=9;
        }

        for(int i=1;i<=9;i++) {
            int val=0;
            for(int j=0;j<length;j++) {
                val = val*10+i;
            }

            if(val<=n) {
                cnt++;
            } else {
                break;
            }
        }
        cout << cnt << endl;
    }
}