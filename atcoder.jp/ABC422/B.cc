#include<bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

string s[20];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int h, w; cin >> h >> w;
    for(int i=0;i<h;i++) cin >> s[i];

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(s[i][j]=='#') {
                int cnt=0;
                for(int k=0;k<4;k++) {
                    int nx = i+dx[k];
                    int ny = j+dy[k];
                    if(nx<0 || nx>=h || ny<0 || ny>=w || s[nx][ny]=='.') continue;
                    cnt++;
                }
                if(cnt!=2 && cnt!=4) {
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
}