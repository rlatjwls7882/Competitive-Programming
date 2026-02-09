#include<bits/stdc++.h>
using namespace std;

int res[100][100];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;

    int lx=0, ly=(n-1)/2;
    res[lx][ly]=1;
    for(int i=0;i<n*n-1;i++) {
        if(!res[(lx+n-1)%n][(ly+1)%n]) {
            res[(lx+n-1)%n][(ly+1)%n]=res[lx][ly]+1;
            lx = (lx+n-1)%n;
            ly = (ly+1)%n;
        } else {
            res[(lx+1)%n][ly]=res[lx][ly]+1;
            lx = (lx+1)%n;
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cout << res[i][j] << ' ';
        cout << '\n';
    }
}