#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string m[10];
        for(int i=0;i<10;i++) {
            cin >> m[i];
        }

        int score=0;
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(m[i][j]=='X') {
                    score += min(min(i+1, 10-i), min(j+1, 10-j));
                }
            }
        }
        cout << score << '\n';
    }
}