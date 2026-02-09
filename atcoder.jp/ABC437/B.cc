#include<bits/stdc++.h>
using namespace std;

int a[3][5], cnt[3];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int h, w, n; cin >> h >> w >> n;
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin >> a[i][j];
    while(n--) {
        int b; cin >> b;
        for(int i=0;i<h;i++) {
            for(int j=0;j<w;j++) {
                if(a[i][j]==b) cnt[i]++;
            }
        }
    }
    cout << *max_element(cnt, cnt+3);
}