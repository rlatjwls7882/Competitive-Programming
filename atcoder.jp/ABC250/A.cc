#include<bits/stdc++.h>
using namespace std;

int moveX[4] = {1, -1, 0, 0};
int moveY[4] = {0, 0, 1, -1};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int H, W, R, C; cin >> H >> W >> R >> C;
    
    int cnt=0;
    for(int i=0;i<4;i++) {
        int nextX = R+moveX[i];
        int nextY = C+moveY[i];

        if(nextX<=0 || nextX>H || nextY<=0 || nextY>W) continue;
        cnt++;
    }
    cout << cnt;
}