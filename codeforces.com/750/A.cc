#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int n, k; cin >> n >> k;
    
    int cnt=0;
    for(int i=1;i<=n;i++) {
        if(5*i+k<=240) {
            cnt++;
            k += 5*i;
        } else {
            break;
        }
    }
    cout << cnt;
}