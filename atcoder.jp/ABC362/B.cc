#include<bits/stdc++.h>
using namespace std;

double calcDist(int a[2], int b[2]) {
    return pow(a[0]-b[0], 2)+pow(a[1]-b[1], 2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int pos[3][2];
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            cin >> pos[i][j];
        }
    }

    int dist[3];
    for(int i=0;i<3;i++) {
        dist[i] = calcDist(pos[i], pos[(i+1)%3]);
    }
    sort(dist, dist+3);

    if(dist[0]+dist[1]==dist[2]) cout << "Yes";
    else cout << "No";
}