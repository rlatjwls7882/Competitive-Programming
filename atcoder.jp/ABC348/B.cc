#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;
    
    int pos[N][2];
    for(int i=0;i<N;i++) {
        cin >> pos[i][0] >> pos[i][1];
    }

    for(int i=0;i<N;i++) {
        int maxDist=0, id=0;
        for(int j=0;j<N;j++) {
            int dist = pow(pos[i][0]-pos[j][0], 2)+pow(pos[i][1]-pos[j][1], 2);
            if(maxDist<dist) {
                maxDist=dist;
                id=j+1;
            }
        }
        cout << id << endl;
    }
}